#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long s;
        cin >> s;
        long long n = (-1 + sqrt(1 + 8 * s)) / 2;
        cout << n << endl;
    }
}