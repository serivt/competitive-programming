import re

n, m = [int(i) for i in input().split()]
ms = [""] * (n * m)
for r in range(n):
    x = input()
    for c in range(m):
        ms[n * c + r] = x[c]
print(re.sub(r"(?<=\w)([^\w]+)(?=\w)", " ", "".join(ms)))
