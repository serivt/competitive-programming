cases = int(input()) + 1

for c in range(1, cases):
    n = int(input())
    a = list(map(int, input().split(" ")))
    # Se hacen saltos entre los edificios mas altos para reducir las
    # iteraciones.
    cache = [0] * n
    for i in range(n - 1, -1, -1):
        cache[i] = i + 1
        while cache[i] < n and a[i] >= a[cache[i]]:
            cache[i] = cache[cache[i]]
    output = " ".join(
        ["-1" if cache[i] >= n else str(a[cache[i]]) for i in range(0, n)]
    )
    print(f"Case #{c}: {output}")