#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];
    long long impar = 0, par = 0;
    long long res = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] == 1) {
            swap(impar, par);
            impar++;
        } else par++;
        res += impar;
    }
    cout << res << "\n";
}