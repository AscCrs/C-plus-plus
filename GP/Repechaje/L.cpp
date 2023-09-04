#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    string S;
    cin >> S;
    int K;
    cin >> K;

    for (int i = 0; i < S.size(); i++) {
        int j = i;
        while (j >= K && S[j - K] > S[j]) {
            swap(S[j], S[j - K]);
            j -= K;
        }
    }
    cout << S << "\n";
}