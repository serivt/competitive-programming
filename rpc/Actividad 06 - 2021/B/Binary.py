n = int(input())
t = sorted([int(x) for x in input().split()], reverse=True)
print(sum(j / 2**i for i, j in enumerate(t, start=1)))