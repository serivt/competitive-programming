count = 0
char = "a"
for i in input():
    if i > char:
        char = i
        count = 0
    if char == i:
        count += 1
print(char * count)
