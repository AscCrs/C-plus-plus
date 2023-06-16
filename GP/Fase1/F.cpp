#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 998244353;
const int N = 1e5+5;
int n, a[N], sz[N], dep[N], fa[N];
vector<int> g[N];
ll f[N], inv[N], ans;

void dfs(int u, int father) {
    fa[u] = father;
    sz[u] = 1;
    dep[u] = dep[father] + 1;
    for(int v : g[u]) {
        if(v == father) continue;
        dfs(v, u);
        sz[u] += sz[v];
    }
}

void solve(int u, int father) {
    ll sum = 0, sum2 = 0;
    for(int v : g[u]) {
        if(v == father) continue;
        solve(v, u);
        sum += f[v];
        sum2 += 1ll * f[v] * f[v] % mod;
    }
    f[u] = (sum + a[u]) % mod * inv[n] % mod;
    f[u] = (f[u] * (n - sz[u])) % mod;
    f[u] = (f[u] + sum2 + 2ll * sum * a[u] % mod * inv[n] % mod * (n - sz[u]) % mod) % mod;
}

int main() {
    inv[1] = 1;
    for(int i = 2; i <= N - 5; i++)
        inv[i] = (mod - mod / i) * inv[mod % i] % mod;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
    for(int i = 1; i < n; i++) {
        int u, v;
        scanf("%d%d", &u, &v);
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1, 0);
    solve(1, 0);
    for(int i = 1; i <= n; i++) {
        ans = (ans + a[i] * (n - sz[i]) % mod * f[i] % mod) % mod;
        ans = (ans - f[i] * ((n - sz[i]) * a[i] % mod + f[i]) % mod) % mod;
    }
    ans = (ans + mod) % mod;
    printf("%lld\n", ans);
}
