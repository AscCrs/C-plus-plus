#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int n;
    cin >> n;

    int count = 0;
    for (int i = 0; i < n; i++) {
        double x, y;
        cin >> x >> y;

        // Calcula la pendiente de la línea entre la casa de Barbie y la Suprema Corte
        double m = (y2 - y1) / (x2 - x1);

        // Calcula la pendiente de la línea entre la casa de Barbie y la amiga actual
        double mx = (y - y1) / (x - x1);

        // Comprueba si la amiga está en la misma línea recta que la casa de Barbie y la Suprema Corte
        if (abs(mx - m) < 1e-9) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
