n, m = [int(x) for x in input().split()]

flag = 0
G = [[]] * n
vis = [-1] * n

def dfs(u: int):
    vis[u] = 1
    for v in G[u]:
        if vis[v] == -1:
            dfs(v)
        elif vis[v] == 1:
            flag = 1
            print("Ok", flag)
    vis[u] = 2

def solve():
    for i in range(m):
        u, v = [int(x) for x in input().split()]
        G[u].append(v)
    for i in range(n):
        if vis[i] == -1:
            dfs(i)
    print(flag)
    print("Yes" if flag else "No")

solve()