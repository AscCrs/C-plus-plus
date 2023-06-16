#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k, l;
    cin >> n >> k >> l;
    float ct = n * k;
    int r;
    r = ceil(ct/l);
    // ct = (ct/l);
    cout << ceil(ct/l);
}