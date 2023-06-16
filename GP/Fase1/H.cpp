#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int count_ways(set<string>& words, string& tattoo) {
    int n = tattoo.length();
    vector<int> dp(n+1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = i-1; j >= 0; j--) {
            if (words.find(tattoo.substr(j, i-j)) != words.end()) {
                dp[i] += dp[j];
                dp[i] %= MOD;
            }
        }
    }
    return dp[n];
}

int main() {
    int n;
    cin >> n;
    set<string> words;
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        words.insert(word);
    }
    string tattoo;
    cin >> tattoo;
    cout << count_ways(words, tattoo) << endl;
}
