n = [int(x) for x in input()]
k = 1
for index in range(-1, -len(n) - 1, -1):
    v = n[index] + k
    n[index] = str(v % 10)
    k = v // 10
if k > 0:
    n.insert(0, "1")
print("".join(n))