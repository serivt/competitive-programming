x = [int(i) for i in input()]
y = [int(i) for i in input()]

if len(x) < len(y):
    x, y = y, x

x.reverse()

k = 0
for i in range(len(x)):
    if y:
        k += y.pop()
    v = x[i] + k
    x[i] = str(v % 10)
    k = v // 10

x.reverse()

if k > 0:
    x.insert(0, "1")

print("".join(x))
