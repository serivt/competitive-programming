t = int(input())
for _ in range(t):
    n = int(input())
    variables = {}
    for _ in range(n):
        line = input()
        index = line.find(":=")
        if index >= 0:
            variables[line[0:index-1]] = line[index+3:]
        else:
            index = line.find("=")
            [a, b] = line[index+2:].replace(" ", "").split("+")
            variables[line[0:index-1]] = variables[a] + variables[b]
        last = variables[line[0:index-1]]
    print(sum(last[i:i+4] == "haha" for i in range(len(last))))