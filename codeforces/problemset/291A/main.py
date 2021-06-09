n = int(input())
sessions = {}
counter = 0
for i in input().split():
    i = int(i)
    if i == 0:
        continue
    if i not in sessions:
        sessions[i] = 0
    sessions[i] += 1
    if sessions[i] == 2:
        counter += 1
    elif sessions[i] == 3:
        counter = -1
        break
print(counter)
