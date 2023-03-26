/* Exercise 10815 Andy's First Dictionary */
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    set<string> wset;
    string line, w;
    while (getline(cin, line)) {
        // Convertir la línea a minúsculas
        transform(line.begin(), line.end(), line.begin(), ::tolower);
        // Recorrer cada caracter de la línea
        for (int i = 0; i < line.length(); i++)
            // Si el caracter no es una letra, reemplazarlo por un espacio
            if (!isalpha(line[i])) line[i] = ' '; 
        
        // Recorrer cada palabra de la línea
        for (int i = 0; i < line.length(); i++) {
            if (line[i] != ' ') w += line[i];
            else if (w.length() > 0) {
                // Insertar la palabra en el conjunto
                wset.insert(w);
                w.clear();
            }
        }
        if (w.length() > 0) {
            wset.insert(w);
        }
    }
    // Imprimir las palabras en orden alfabético
    for (string word : wset) {
        cout << word << endl;
    }

    return 0;
}