#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000005;

int n, k, nxt[MAXN];
char s[MAXN], ans[MAXN];

int main() {
    cin >> n >> k;
    cin >> s;

    int i = 0, j = 1;
    while (i < n && j < n) {
        int p = i, q = j;
        while (p < n && q < n && s[p] == s[q]) {
            if (q - i + 1 > k) {
                i = nxt[i];
            }
            p++, q++;
        }
        nxt[j] = p;
        if (q - i <= k) {
            if (q - i > strlen(ans)) {
                strncpy(ans, s + i, q - i);
            }
        } else {
            i = nxt[i];
        }
        j++;
    }

    if (strlen(ans) == 0) {
        cout << "-1" << endl;
    } else {
        cout << strlen(ans) << endl;
        ans[strlen(ans)] = '\0';
        cout << ans << endl;
    }

    return 0;
}
