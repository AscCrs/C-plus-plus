#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<vector<int>> c(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> c[i][j];
        }
    }

    vector<vector<int>> dist = c;
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist[i][j] < c[i][j]) {
                cout << -1 << "\n";
                return 0;
            }
        }
    }

    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && c[i][j] == dist[i][j]) {
                for (int k = 0; k < n; k++) {
                    if (k != i && k != j && c[i][k] + c[k][j] == c[i][j]) {
                        res++;
                        break;
                    }
                }
            }
        }
    }

    cout << res / 2 << "\n";

    return 0;
}