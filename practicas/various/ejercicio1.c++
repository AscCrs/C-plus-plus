/* Realizar un algoritmo que lea una matriz de 3x3 y cree su matriz traspuesta.
    La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original.
    Ejemplo: 
    /1 2 3/      /1 4 7/
    /4 5 6/ -->  /2 5 8/
    /7 8 9/      /3 6 9/
    */
#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cout<< "Ingrese el tamanio de la matriz cuadrada: " << endl;
    cin >> n;
    int m[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> m[i][j];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << m[j][i] << " ";
        }
        cout << "\n";
    }
    

    return 0;
}