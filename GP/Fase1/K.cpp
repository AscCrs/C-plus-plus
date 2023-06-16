#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int n, s, e, m;
int dist[105][105];
vector<int> start, endv;

void floyd_warshall() {
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
}

int main() {
    cin >> n >> s >> e;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            dist[i][j] = INF;
        }
        dist[i][i] = 0;
    }
    for (int i = 1; i <= s; i++) {
        int x;
        cin >> x;
        start.push_back(x);
    }
    for (int i = 1; i <= e; i++) {
        int x;
        cin >> x;
        endv.push_back(x);
    }
    cin >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        dist[u][v] = 1;
    }
    floyd_warshall();
    int ans = 0;
    for (int i = 0; i < start.size(); i++) {
        for (int j = 0; j < endv.size(); j++) {
            if (dist[start[i]][endv[j]] != INF) {
                ans = max(ans, dist[start[i]][endv[j]]);
            }
        }
    }
    cout << ans << "\n";
    return 0;
}
