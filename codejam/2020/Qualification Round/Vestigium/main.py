t = int(input()) + 1
for case in range(1, t):
    n = int(input())
    m = []
    k, r, c = 0, 0, 0
    for i in range(n):
        m += [int(x) for x in input().split()]
        k += m[n * i + i]
    for i in range(n):
        start = i * n
        end = i * n + n
        if len(set(m[start:end])) != n:
            r += 1
        col = [m[x+i] for x in range(0, n**2, n)]
        if len(set(col)) != n:
            c += 1
    print("Case #%d: %d %d %d" % (case, k, r, c))
