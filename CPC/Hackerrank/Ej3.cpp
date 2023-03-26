#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    list<int> a;
    int n = 0, num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        a.push_back(num);
    }

    for (int item: a) {
        cout << item << "\n";
    }

    return 0;
}