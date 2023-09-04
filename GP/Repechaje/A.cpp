#include <iostream>

using namespace std;

int main() {
    int n, h, cont = 0, r;
    cin >> n >> h;
    for (int i = 0; i < n; ++i) {
        cin >> r;
        if (r <= h) cont++;
    }

    cout << cont << "\n";
}