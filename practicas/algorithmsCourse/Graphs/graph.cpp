#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector <int> > graph;

int main() {
    int v; // Numero de vertices (filas en la matriz)
    int a; // Numero de aristas en el grafo
    cin >> v >> a;

    // Declarar la lista de adyacencia
    graph G(v); // Grafo G
    // Leer el grafo por consola

    for (int i = 0; i < a; ++i){
        int x, y;
        cin >> x >> y; // Leo arista(x, y) del grafo
        G[x].push_back(y); // En la fila x se introduce el vertice y
        G[y].push_back(x); // En la fila y se introduce el vertice x
    }

    // imprimir el grafo
    for (int i = 0; i < v;++i) {
        cout << "Verices adyacentes a " << i << ": ";
        for (int j = 0; j < G[i].size(); ++j) cout << G[i][j] << " ";
        cout << "\n";
    }
}