#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n+1), pos(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pos[a[i]] = i;
    }

    int res = 0, maxPos = 0;
    for (int i = 1; i <= n; i++) {
        maxPos = max(maxPos, pos[i]);
        if (maxPos == i) res++;
    }

    cout << res << "\n";

    return 0;
}