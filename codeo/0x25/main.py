import itertools

n = input()
arr = list(map(int, input().split(" ")))
c = int(input())
acum = list(itertools.accumulate(arr))

for i in range(0, c):
    [p, q] = map(int, input().split())
    print(acum[q] - (acum[p - 1] if p > 0 else 0))