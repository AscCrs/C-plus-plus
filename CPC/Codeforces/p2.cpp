#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    set<int> comb;
    int n = 0, size;

    for (int i = 0; i < 4; i++) {
        cin >> n;
        comb.insert(n);
    }

    cout << 4 - comb.size() << endl;

    return 0;
}