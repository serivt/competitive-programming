t = int(input()) + 1
for case in range(1, t):
    n = int(input())
    a = [int(x) for x in input().split()]
    i, j, ans = 0, a.index(min(a)), 0
    while i < n - 1:
        a[i : j + 1] = list(reversed(a[i : j + 1]))
        ans += j - i + 1
        i += 1
        j = a.index(min(a[i:]))
    print("Case #%d: %d" % (case, ans))
