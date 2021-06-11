t = int(input()) + 1
for case in range(1, t):
    s = list(map(int, input()))
    diff = 0
    print("Case #%d: " % case, end="")
    for i in s:
        while diff < i:
            print("(", end="")
            diff += 1
        while diff > i:
            print(")", end="")
            diff -= 1
        print(i, end="")
    while diff > 0:
        print(")", end="")
        diff -= 1
    print()
