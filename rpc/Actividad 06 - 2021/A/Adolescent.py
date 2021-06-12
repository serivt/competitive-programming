import math

def get_diagonal(a):
    return math.sqrt(a**2+a**2)

def previous_fit_inside(p, f):
    if p[0] == f[0]:
        return True
    elif p[0] == "cylinder" and p[1] <= f[2]:
        return True
    elif p[0] == "cube" and p[1] <= f[1]:
        return True
    return False


n = int(input())
t = []
for _ in range(n):
    f, a = input().split()
    if f == "cylinder":
        t.append((f, int(a) * 2, int(a)))
    else:
        t.append((f, get_diagonal(int(a)), int(a)))
t.sort(key=lambda x: x[1])
possible = False
for i in range(1, n):
    possible = previous_fit_inside(t[i-1], t[i])
    if not possible:
        break
if possible:
    for i in t:
        print(i[0], i[2])
else:
    print("impossible")