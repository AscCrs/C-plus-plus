#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n, res = 10000000, act;
    cin >> n;
    // int arr[n];

    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    //     if (i == 0) res = arr[i];
    //     else if (arr[i] < arr[i - 1]) res = arr[i];
    // }
    while (n--) {
        cin >> act;
        res = (act < res) ? act : res;
    }
    cout << res;
}