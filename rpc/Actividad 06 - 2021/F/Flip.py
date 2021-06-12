t, s, n = [int(x) for x in input().split()]
a = [False] * t
for i in [int(x) for x in input().split()]:
    a[i] = True
# m = -1
# b = 0
# for i in range(t):
#     if a[i]:
#         m *= -1
#     if b + m >= 0 and b + m <= s:
#         b += m
#     print((i+1), b)
# print(b)

u, l = 0, s
for i in range(t):
    if a[i]:
        u, l = l, u
    if u > 0:
        u -= 1
        l += 1
print(u)