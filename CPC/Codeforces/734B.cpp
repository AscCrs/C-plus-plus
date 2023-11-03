#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int k2, k3, k5, k6, sum = 0;
    int max256 = 0, max32 = 0;
    
    cin >> k2 >> k3 >> k5 >> k6;

    max256 = k2;
    if (k5 < max256) max256 = k5;
    if (k6 < max256) max256 = k6;

    k2 -= max256;
    
    max32 = k2;
    if (k3 < max32) max32 = k3;

    sum = (max256 * 256) + (max32 * 32);
    cout << sum;
}
