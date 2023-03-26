/* Ejercicio: Comprobar si un numero es par o impar, señalar la 
posición en memora donde se está guardando el número. Utiliza punteros*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int num, *dir_num;
    bool isPar;
    dir_num = &num;

    cin >> num;

    if (*dir_num%2 == 0) {
        isPar = true;
    } 

    cout << "The number " << num << " is par?: " << isPar << endl;
    cout << "The direction of number is " << dir_num << endl;

    return 0;
}