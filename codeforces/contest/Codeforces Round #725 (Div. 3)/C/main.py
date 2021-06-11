from bisect import bisect_left, bisect_right

t = int(input())

for _ in range(t):
    n, l, r = [int(x) for x in input().split()]
    a = sorted([int(x) for x in input().split()])
    i, j = 0, n - 1
    pairs = sum(
        bisect_left(a, l - a[i], hi=i) - bisect_right(a, r - a[i], hi=i)
        for i in range(n)
    )
    print(abs(pairs))
