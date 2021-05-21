n = [int(x) for x in input()]
limit = -len(n)
index = -1
while index >= limit:
    n[index] += 1
    if n[index] < 10:
        break
    n[index] = 0
    n[index] = str(n[index])
    index -= 1
while index >= limit:
    n[index] = str(n[index])
    index -= 1
if n[limit] == "0":
    n.insert(0, "1")
print("".join(n))