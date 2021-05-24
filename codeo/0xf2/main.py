import itertools

n = int(input())
arr = list(map(int, input().split(" ")))
acum = list(itertools.accumulate(arr))
total = acum[n - 1]
middle = None

for i in range(0, n):
    right = acum[i] if i != 0 else 0
    if acum[i] > 0 and total - acum[i] < 0:
        middle = i + 1
        break

print(middle or "Impossible")