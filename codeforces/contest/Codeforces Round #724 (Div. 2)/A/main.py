cases = int(input())

for _ in range(cases):
    n = int(input())
    a = [int(x) for x in input().split()]
    if min(a) < 0:
        print("NO")
    else:
        m = max(a) + 1
        print("YES")
        print(m)
        for i in range(m):
            print(i, end=" ")
        print()
