good = False
for _ in range(int(input())):
    name, before, after = input().split()
    if int(before) >= 2400 and int(after) > int(before):
        good = True
        break
print("YES" if good else "NO")