class Solution {
public:
    vector<int> topo(vector<vector<int>>& rc, int n) {
    vector<vector<int>> adj(n);
    vector<int> indeg(n, 0);

    for (auto &e : rc) {
        adj[e[0] - 1].push_back(e[1] - 1);
        indeg[e[1] - 1]++;
    }

    queue<int> q;
    for (int i = 0; i < n; i++)
        if (indeg[i] == 0) q.push(i);

    vector<int> order;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        order.push_back(u);
        for (int v : adj[u]) {
            if (--indeg[v] == 0)
                q.push(v);
        }
    }

    if (order.size() != n) return {};
    return order;
}

vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rc, vector<vector<int>>& cc) {
    vector<int> ab = topo(rc, k);
    vector<int> lr = topo(cc, k);
    if (ab.empty() || lr.empty()) return {};

    vector<int> rowPos(k), colPos(k);
    for (int i = 0; i < k; i++) {
        rowPos[ab[i]] = i;
        colPos[lr[i]] = i;
    }

    vector<vector<int>> ans(k, vector<int>(k, 0));
    for (int x = 0; x < k; x++) {
        ans[rowPos[x]][colPos[x]] = x + 1;
    }

    return ans;
}

};