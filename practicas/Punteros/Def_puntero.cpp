/* Los punteros se encargan de mostrar la posición en memoria
   de nuestras variables, hay dos formas de definir un puntero

   * &n - muestra la dirección exacta donde se encuentra nuestra var
   * *n - Muestra el valor que almacena la variable en esa posición de memoria
   
   A continuación se muestra un ejemplo simple:
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
     int num, *dir_num;

     num = 20;
     dir_num = &num;

     cout << *dir_num << endl;
     cout << dir_num << endl;
     cout << &num << endl;

    return 0;
}