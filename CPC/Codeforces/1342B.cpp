#include <iostream>

using namespace std;

int t, n;
string s;

bool canReach(string s, int n, int d) {
    int pos = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L') {
            pos = max(0, pos - d);
        } else {
            pos = min(n + 1, pos + d);
        }
        if (pos >= n + 1) {
            return true;
        }
        if (pos < 0) {
            return false;
        }
    }
    return false;
}

int main() {
    cin >> t;
    while (t--) {
        cin >> s;
        n = s.size();
        int lo = 1, hi = n;
        int ans = n;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            if (canReach(s, n, mid)) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
