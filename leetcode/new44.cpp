vector<int> parent;

int find(int x) {
    if (parent[x] != x)
        parent[x] = find(parent[x]);
    return parent[x];
}

bool unionSet(int a, int b) {
    int pa = find(a), pb = find(b);
    if (pa == pb) return false;
    parent[pa] = pb;
    return true;
}

bool validTree(int n, vector<vector<int>>& edges) {
    if (edges.size() != n - 1) return false;

    parent.resize(n);
    for (int i = 0; i < n; i++) parent[i] = i;

    for (auto &e : edges) {
        if (!unionSet(e[0], e[1]))
            return false;
    }

    return true;
}