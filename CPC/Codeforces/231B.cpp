#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, cont, sum, ans;
    cin >> n;
    ans = 0;
    while (n--) {
        sum = 0;
        for (int i = 0; i < 3; i++) { 
            cin >> cont;
            sum = sum + cont;
        }
        ans = (sum >= 2) ? ans + 1 : ans;
    }

    cout << ans;
}