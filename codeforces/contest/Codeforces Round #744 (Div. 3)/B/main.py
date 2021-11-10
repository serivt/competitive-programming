def shift(arr, l, r):
    x = arr[l]
    for i in range(l, r):
        arr[i] = arr[i + 1]
    arr[r] = x
    return arr


t = int(input())
for _ in range(t):
    n = int(input())
    arr = [int(i) for i in input().split()]
    ans = []
    last = n - 1
    if sorted(arr) == arr:
        print("0")
        print()
        continue
    while last > 0:
        m = max(arr[0:last+1])
        for i in range(n):
            if arr[i] == m and i != last:
                ans.append("%s %s 1" % (i + 1, last + 1))
                arr = shift(arr, i, last)
                break
        last -= 1
        if sorted(arr) == arr:
            break
    print(len(ans))
    for i in ans:
        print(i)
