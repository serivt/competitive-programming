from collections import defaultdict
import operator 

s = input()
l = len(s) // 3
for i in range(l):
    c = defaultdict(int)
    for j in range(i, len(s), l):
        c[s[j]] += 1
    x = max(c.items(), key=operator.itemgetter(1))[0]
    print(x, end="")
print()
