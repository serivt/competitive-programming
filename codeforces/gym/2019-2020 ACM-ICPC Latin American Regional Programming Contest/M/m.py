n, x = [int(i) for i in input().split()]

a = [int(i) for i in input().split()]

ans, count = 0, 1

for i in range(n - 1):
    if a[i + 1] - a[i] <= x:
        count += 1
    else:
        ans = max(ans, count)
        count = 1
ans = max(ans, count)
print(ans)