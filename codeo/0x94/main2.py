# Dynamic programming
# Kadane's Algorithms

n = int(input())
a = [int(i) for i in input().split()]
dp = [0] * len(a)
dp[0] = a[0]
best = dp[0]
for i in range(1, n):
    dp[i] = max(a[i], dp[i -1] + a[i])
    best = max(best, dp[i])
print(best)