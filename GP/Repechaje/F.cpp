#include <iostream>
#include <vector>

using namespace std;

int main() {
    int d, c, r;
    cin >> d >> c >> r;
    int vc[c];
    int vr[r];
    bool valw = false;
    for (int i = 0; i < c; ++i) {
        cin >> vc[i];
    }
    for (int j = 0; j < r; ++j) {
        cin >> vr[j];
    }

    int cont = 0, posvc = 0, posvr = 0;
    while(valw == false) {
        if (d >= vc[posvc] && posvc < c) {
            d -= vc[posvc];
            cont++;
            posvc++;
        } else if (posvr < r) {
            d += vr[posvr];
            posvr ++;
            cont ++;
        } else {
            valw = true;
        }
    }
    cout << cont;
}