n = int(input())
square = []
sums = {
    "diagonalA": 0,
    "diagonalB": 0,
    "vertical": 0,
    "horizontal": 0
}
is_magic = True
for i in range(n):
    square.append(list(map(int, input().split(" "))))
    sums["diagonalA"] += square[i][i]
    sums["diagonalB"] += square[i][n - (i + 1)]

if sums["diagonalA"] != sums["diagonalB"]:
    is_magic = False
else:
    for i in square:
        if sum(i) != sums["diagonalA"]:
            is_magic = False
            break
    if not is_magic:
        for col in range(n):
            v_sum = sum(row[col] for row in square)
            if v_sum != sums["diagonalA"]:
                is_magic = False
                break


print("Yes" if is_magic else "No")