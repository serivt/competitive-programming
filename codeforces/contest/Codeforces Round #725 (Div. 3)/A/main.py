t = int(input())
for _ in range(t):
    n = int(input())
    a = [int(x) for x in input().split()]
    min_stone, min_pos = n + 1, 0
    max_stone, max_pos = 0, 0
    for i in range(n):
        power = int(a[i])
        if power < min_stone:
            min_stone, min_pos = power, i
        if power > max_stone:
            max_stone, max_pos = power, i
    ans1 = max(min_pos, max_pos) + 1
    ans2 = max(n - min_pos, n - max_pos)
    if min_pos > n // 2:
        min_pos = n - min_pos
    else:
        min_pos += 1
    if max_pos > n // 2:
        max_pos = n - max_pos
    else:
        max_pos += 1
    ans3 = min_pos + max_pos
    print(min([ans1, ans2, ans3]))
