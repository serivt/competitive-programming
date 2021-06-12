import math
w, h = [int(x) for x in input().split()]
print(w + h - math.sqrt(w**2 + h**2))