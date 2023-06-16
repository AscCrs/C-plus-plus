#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> dp(n+1, 0);
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i && j <= 3; j++) {
            if (!dp[i-j]) {
                dp[i] = 1;
                break;
            }
        }
    }

    if (dp[n]) {
        cout << "Jane\n";
    } else {
        cout << "John\n";
    }
    
    return 0;
}
