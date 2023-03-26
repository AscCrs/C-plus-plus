#include <iostream>

using namespace std;

int t, n;
string camino;

bool pasa(int aux) { 
    int disAct = 0;
    for(int i = 0; i < n; i++) { 
        disAct++;
        if(camino[i] == 'R') {
            disAct = 0;
        }
        if(disAct > aux) {
            return true;
        }
    }
    return false;
}

int main() {
    cin >> t;
    while(t--) {
        cin >> camino;
        camino = " " + camino;
        n = camino.size();
        int L = 1, R = n + 1;
        int m, d = R;
        while(L < R) {
            m = (L + R) / 2;
            if(pasa(m)) {
               // cout<<"1\n";
                d = min(d, m);  
                L = m + 1;
            }
            else {
                R = m;
            }
        }
        // cout<<L<<" "<<m<< " " << d <<" "<<R<<"\n";
        cout << L << "\n";
    }
}