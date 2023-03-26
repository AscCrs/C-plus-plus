#include <stdio.h>
#include <math.h>

double laplace(double (*f)(double), double s, int order) {
    // Calcular la transformada de Laplace de la función f
    double result = 0.0;
    for(int i=0; i<=order; i++) {
        double coeff = tgamma(i+1);
        result += (coeff/pow(s, i+1)) * f(i);
    }
    return result;
}

// Función de prueba
double f(double t) {
    return t*t;
}

int main() {
    // Calcular la transformada de Laplace de f(t) = t^2
    double s = 2.0;
    int order = 2;
    double result = laplace(f, s, order);
    printf("La transformada de Laplace de f(t) = t^2 para s=%lf y orden %d es: %lf\n", s, order, result);
    return 0;
}
