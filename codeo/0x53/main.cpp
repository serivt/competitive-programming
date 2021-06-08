#include <iostream>
#include <vector>
#include <map>
#include <iterator>

using namespace std;

struct NODE
{
    vector<int> edges;
    bool visited;
    bool explore;
};

map<int, NODE> graph;

bool dfs(NODE node) {
    if (node.visited) return false;
    if (node.explore) return true;
    node.explore = true;
    for (int i = 0; i < node.edges.size(); i++) {
        if (!graph[node.edges[i]].visited && dfs(graph[node.edges[i]])) return true;
    }
    node.explore = false;
    node.visited = true;
    return false;
}

bool hasCycles() {
    map<int, NODE>::iterator it = graph.begin();
    while (it != graph.end()) {
        NODE node = it->second;
        if (!node.visited && dfs(node)) return true;
        it++;
    }
    return false;
}
    

int main() {
    
    int n, m;
    cin >> n >> m;
    int u, v;
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        graph[u].edges.push_back(v);
    }
    if (hasCycles()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}