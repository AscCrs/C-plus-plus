#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
int N, A[MAXN], dp[MAXN], seg[4 * MAXN];

void update(int p, int v, int n = 1, int s = 1, int e = N) {
    if (s == e) {
        seg[n] = max(seg[n], v);
        return;
    }
    int mid = (s + e) / 2;
    if (p <= mid) update(p, v, 2 * n, s, mid);
    else update(p, v, 2 * n + 1, mid + 1, e);
    seg[n] = max(seg[2 * n], seg[2 * n + 1]);
}

int query(int l, int r, int n = 1, int s = 1, int e = N) {
    if (l > e || r < s) return 0;
    if (l <= s && e <= r) return seg[n];
    int mid = (s + e) / 2;
    return max(query(l, r, 2 * n, s, mid), query(l, r, 2 * n + 1, mid + 1, e));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    vector<int> V(N + 1), P(N + 1);
    for (int i = 2; i <= N; i++) cin >> P[i];
    for (int i = 1; i <= N; i++) cin >> V[i];

    for (int i = 1; i <= N; i++) {
        dp[i] = query(1, V[i] - 1) + 1;
        update(V[i], dp[i]);
    }

    for (int i = 2; i <= N; i++) cout << dp[i] << " ";
    cout << "\n";

    return 0;
}