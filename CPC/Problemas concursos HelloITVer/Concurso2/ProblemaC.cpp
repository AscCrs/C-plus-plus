/* Exercise 902 Password Search */
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s;
    string ans;            // Cadena donde se almacenará la subcadena más frecuente
    map<string, int> m; // Se declara un mapa donde se almacenarán las subcadenas y su frecuencia
    int n;
    while (cin >> n && n) {
        cin >> s;
        int size = s.size();
        int c = 0;      //  Contador de la frecuencia máxima
        for (int i = 0; i < size - n + 1; i++) {
            string sub = s.substr(i, n); // Se obtiene la subcadena de tamaño n a partir de la posición i
            m[sub]++;                 // Se incrementa en uno la frecuencia de la subcadena obtenida
            if (m[sub] > c) {       // Si la frecuencia de la subcadena es mayor a la frecuencia máxima
                c = m[sub]; // Se actualiza la frecuencia máxima
                ans = sub;            // Se actualiza la subcadena más frecuente
            }
        }
        cout << ans << endl; // Se imprime la subcadena más frecuente
    }
    return 0;
}
