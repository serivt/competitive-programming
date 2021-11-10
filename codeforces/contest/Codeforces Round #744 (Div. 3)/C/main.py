def shift(arr, l, r, d):
    # _arr = arr[l:r]
    # for _ in range(d):
    #     _arr = _arr[1:] + [_arr[0]]
    # shift_arr = []
    # if l > 0:
    #     shift_arr += arr[0:l-1]
    # shift_arr += _arr
    # if r < n - 1:
    #     shift_arr += arr[r+1:]
    # return shift_arr
    for _ in range(d):
        x = arr[l]
        for i in range(l, r):
            arr[i] = arr[i + 1]
        arr[r] = x
    return arr


t = int(input())
for _ in range(t):
    n = int(input())
    arr = [int(i) for i in input().split()]
    l, d = None, 0
    ans = []
    sorted_arr = sorted(arr)
    last = n - 1
    while sorted_arr != arr:
        i = 0
        while i < n:
            if arr[i] >= arr[last] and i < last:
                if l is None:
                    l = i
                    d = 1
                else:
                    d += 1
            elif l is not None:
                ans.append("%s %s %s" % (l + 1, last + 1, d))
                arr = shift(arr, l, last, d)
                l = None
                last -= 1
                i -= 1
            i += 1
        last -= 1
    print(len(ans))
    for i in ans:
        print(i)