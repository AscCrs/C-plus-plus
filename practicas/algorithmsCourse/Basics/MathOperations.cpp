#include <iostream>
#include <string>

using namespace std;

// int main() {
//     ios_base::sync_with_stdio(0);cin.tie(0);
//     string opc, res;
//     double resul = 0, a, b;

//     while (1) {
//         cin >> opc;
//         if (!opc.compare("parar")) {
//             if (!opc.compare("cambio")) {
//                 cin >> a;
//                 resul = -a;
//                 cout << resul << "\n";
//             } else {
//                 cin >> a >> b;
//                 resul = (!opc.compare("suma")) ? a + b : a - b;
//                 cout << resul << "\n";
//             }
//         } else {
//             break;
//         }
//         res += to_string(resul) + "\n";
//     }

//     cout << res << "\n";
// }

int main () {
    // Imponemos la condicion de decimales
    cout.setf(ios::fixed);
    // Imponemos la donciion de estrictamente 2 decimales
    cout.precision(2);
    string word; 
    double a, b;
    while(cin >> word and word != "parar") {
        cin >> a;
        if (word == "cambio") cout << a * -1;
        else {
            cin >> b;
            if (word == "suma") cout << a + b;
            if (word == "resta") cout << a - b;
        }
        cout << "\n";
         
    }
}