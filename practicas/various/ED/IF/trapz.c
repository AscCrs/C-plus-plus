#include <stdio.h>

#define FUNC(X) ((*func)(x))

float trapzd(float (*func)(float), float a, float b, int n) {
    float x, tnm, sum, del;
    static float s;
    int it, j;

    if (n == 1) {
        return (s = 0.5 * (b - a) * (FUNC(a) + FUNC(b)));
    } else {
        for (it = 1, j = 1; j < n - 1; j++) it <<= 1;
        tnm = it;
        del = (b - a) / tnm;
        x = a + 0.5 * del;
        for (sum = 0.0, j = 1; j <= it; j ++, x+= del) sum += FUNC(x);
        s = 0.5 * (s + (b - a) * sum / tnm);
        return s;
    }
}

float func(float x) {
    return x * x + 1;
}

int main() {
    float a = 0.0;
    float b = 2.0;
    int n = 4;

    float integral = trapzd(func, a, b, n);
    printf("El valor aproximado de la integral = %f\n", integral);
}