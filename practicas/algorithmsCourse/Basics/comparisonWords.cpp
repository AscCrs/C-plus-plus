#include <iostream>

using namespace std;

int main () {
    string w, x;
    cin >> w >> x;

    if (w > x) cout << w << " > " << x << "\n";
    else if (w < x) cout << w << " < " << x << "\n";
    else cout << w << " == " << x << "\n";
}