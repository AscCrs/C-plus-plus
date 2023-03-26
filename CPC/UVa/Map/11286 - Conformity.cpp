/*
    Exercise 11286 Conformity
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> courseCom; // Declaración del mapa donde se almacenarán las combinaciones
    int n;
    while (cin >> n) {
        if (n == 0) { // Validamos que se sigan ingresando datos
            break;
        }

        courseCom.clear();
        int maxC = 0; // Contador para el valor máximo de combinaciones populare

        for (int i = 0; i < n; i++) {
            int courses[5]; 
            for (int j = 0; j < 5; j++) {
                cin >> courses[j];
            }
            sort(courses, courses + 5); // Ordenar los cursos para generar una combinación única
            string combination = "";
            for (int j = 0; j < 5; j++) {
                combination += to_string(courses[j]) + " ";
            }
            courseCom[combination]++;
            maxC = max(maxC, courseCom[combination]);
        }

        int mostPopularCombinations = 0;
        for (auto const &combination : courseCom) {
            if (combination.second == maxC) {
                mostPopularCombinations += maxC;
            }
        }

        cout << mostPopularCombinations << endl;
    }

    return 0;
}