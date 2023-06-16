#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;

int n, q, a[MAXN];
int bit[MAXN], pos[MAXN], cnt;

void update(int i, int v) {
    while (i <= n) {
        bit[i] += v;
        i += i & -i;
    }
}

int query(int i) {
    int sum = 0;
    while (i > 0) {
        sum += bit[i];
        i -= i & -i;
    }
    return sum;
}

int main() {
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pos[a[i]] = i;
        update(i, 1);
        cnt++;
    }
    for (int i = 1; i <= q; i++) {
        int op;
        cin >> op;
        if (op == 1) {
            int k;
            cin >> k;
            if (pos[k] == 0) {
                pos[k] = ++n;
                update(n, 1);
                cnt++;
            }
            for (int j = pos[k]; j <= n; j += j & -j) {
                bit[j]--;
            }
            update(pos[k], 1);
        } else {
            int a, b;
            cin >> a >> b;
            a = query(a - 1) + 1;
            b = query(b);
            cout << (b - a + 1) << '\n';
        }
    }
    return 0;
}
