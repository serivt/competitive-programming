import bisect

k = int(input()) + 1
ans = []
for i in range(1, k):
    n = int(input())
    h = [int(x) for x in input().split()]
    maximums = [0] * n
    max_h = h[-1]
    for j in range(n - 1, -1, -1):
        max_h = max(max_h, h[j])
        maximums[j] = max_h
    p = []
    for j in range(n):
        left = bisect.bisect_right(p, h[j])
        if left < len(p) and p[left] < maximums[j] and h[j] < p[left]:
            ans.append(i)
            break
        p.append(h[j])
print(len(ans))
for i in ans:
    print(i)
