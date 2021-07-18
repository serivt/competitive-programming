from bisect import bisect_left

[_, m] = [int(i) for i in input().split()]
n = [int(i) for i in input().split()]
a = sorted([int(i) for i in input().split()])
b = sorted([int(i) for i in input().split()])
ans = 0
for i in n:
    j = bisect_left(a, i)
    if j < m and a[j] == i:
        ans += 1
        continue
    j = bisect_left(b, i)
    if j < m and b[j] == i:
        ans -= 1
print(ans)
