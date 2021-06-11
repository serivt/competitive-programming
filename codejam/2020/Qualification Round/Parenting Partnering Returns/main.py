t = int(input()) + 1
for case in range(1, t):
    n = int(input())
    a = []
    for i in range(n):
        s, e = [int(x) for x in input().split()]
        a.append((s, e, i))
    a.sort(key=lambda t : t[0])
    schedule = [""] * n
    cameron = a.pop(0)
    jaimie = a.pop(0)
    schedule[cameron[2]] = "C"
    schedule[jaimie[2]] = "J"
    impossible = False
    for i in a:
        if cameron[1] <= i[0]:
            cameron = i
            schedule[i[2]] = "C"
        elif jaimie[1] <= i[0]:
            jaimie = i
            schedule[i[2]] = "J"
        else:
            impossible = True
            break
    if impossible:
        print("Case #%d: %s" % (case, "IMPOSSIBLE"))
    else:
        print("Case #%d: %s" % (case, "".join(schedule)))