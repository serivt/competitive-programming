from math import ceil
n, m, a = [int(x) for x in input().split()]
print(ceil(n / a) * ceil(m / a))