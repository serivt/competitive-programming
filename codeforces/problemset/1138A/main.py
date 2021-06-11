_ = int(input())
t = [int(x) for x in input().split()]
previous = t.pop(0)
ans = 0
counter = [0, 0, 0]
counter[previous] = 1
for i in t:
    if previous != i:
        ans = max(ans, min(counter[1], counter[2]) * 2)
        counter[i] = 0
    counter[i] += 1
    previous = i
ans = max(ans, min(counter[1], counter[2]) * 2)
print(ans)
