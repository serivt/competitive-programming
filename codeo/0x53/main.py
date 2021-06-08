graph = {}

# Depth First Search
def dfs(node):
    if node["visited"] is True:
        return False
    if node["explore"] is True:
        return True
    node["explore"] = True
    for edge in node["edges"]:
        edge = graph[edge]
        if edge["visited"] is False and dfs(edge) is True:
            return True
    node["explore"] = False
    node["visited"] = True
    return False

def has_cycles():
    for node in graph.values():
        if node["visited"] is False and dfs(node) is True:
            return True
    return False

n, m = [int(x) for x in input().split()]

for i in range(n):
    graph[i] = {
        "edges": set(),
        "visited": False,
        "explore": False
    }

for i in range(m):
    u, v = [int(x) for x in input().split()]
    graph[u]["edges"].add(v)

print("Yes" if has_cycles() else "No")
