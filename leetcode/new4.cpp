#include <vector>
using namespace std;

bool dfs(int node, vector<vector<int>>& adj, vector<int>& vis) {
    if (vis[node] == 1) return true;
    if (vis[node] == 2) return false;

    vis[node] = 1;

    for (int nei : adj[node]) {
        if (dfs(nei, adj, vis)) return true;
    }

    vis[node] = 2;
    return false;
}

bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    vector<vector<int>> adj(numCourses);

    for (auto &p : prerequisites) {
        adj[p[1]].push_back(p[0]);
    }

    vector<int> vis(numCourses, 0);

    for (int i = 0; i < numCourses; i++) {
        if (dfs(i, adj, vis)) return false;
    }

    return true;
}