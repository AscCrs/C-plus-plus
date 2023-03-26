#include <iostream>

using namespace std;

int main() {
    string s;
    float a, b, res = 0;
    while (true) {
        cin >> s >> a >> b;
        if (s == "suma") res = a + b;
        if (s == "resta") res = a - b;
        if (s == "cambio") res = - a;
        if (s == "parar") break;
    }
}