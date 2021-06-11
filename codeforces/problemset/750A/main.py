from bisect import bisect_left
from itertools import accumulate

n, k = [int(x) for x in input().split()]
problems_time = list(accumulate([i * 5 for i in range(1, n + 1)]))
minutes_remaining = 60 * 4 - k
print(bisect_left(problems_time, minutes_remaining + 1))