n = int(input())
arr = sorted(list(map(int, input().split(" "))))
c = int(input())

for i in range(0, c):
    x = int(input())
    if arr[-1] <= x:
        print("0")
    else:
        for j in range(0, n):
            if arr[j] > x:
                print(n - j)
                break