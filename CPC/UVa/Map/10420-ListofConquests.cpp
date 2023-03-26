#include <iostream>
#include <map>      //Declarando las librerias
#include <sstream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; // numero de conquistas
    map<string, int> m; // mapa que almacena el country de cada conquista y su freq
    map<string, int>::iterator it; // variable iteradora para recorrer el mapa
    string line, sub; // line leera toda la linea y sub almacenara temporalmente el country
    cin >> n; 
    cin.ignore();  // Ignoramos el salto de linea despues de leer el numero de entradas
    for (int i = 0; i < n; i++) {
        getline(cin, line); // Leemos una linea completa
        istringstream iss(line); // Se utiliza como flujo de datos para extraer los datos de forma separada
        iss >> sub; // lee el pais en la primera palabra de la linea
        m[sub]++; // se agrega el pais al mapa y se incrementa la frecuencia
    }

    for(it = m.begin(); it != m.end(); it++) {
        cout << it->first << " " << it->second << "\n";
    }   

    return 0;
}

/*
    La línea "istringstream iss(line);" crea un objeto de tipo 
    "istringstream" llamado "iss" y le pasa como argumento "line", 
    que es una cadena de texto. Este objeto es utilizado para 
    dividir la cadena "line" en diferentes palabras o fragmentos 
    de texto, utilizando el operador '>>' de la misma manera que 
    si se utilizara un flujo de entrada tradicional, como cin. 
    De esta manera, se pueden almacenar cada palabra de "line" 
    en una variable distinta para su posterior procesamiento.
*/