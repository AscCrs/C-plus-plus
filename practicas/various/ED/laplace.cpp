#include <iostream>
#include <string>
#include <cmath>

double laplace_transform(const std::string& f_expr, double s)
{
    using namespace exprtk;

    // Definir la variable independiente t
    symbol_table<double> symbol_table;
    symbol_table.add_variable("t", 0.0);

    // Crear el objeto parser para la función ingresada
    expression<double> expression;
    expression.register_symbol_table(symbol_table);
    parser<double> parser;
    parser.compile(f_expr, expression);

    // Definir la función f(t) en términos de la variable s
    auto F = [&](double t) {
        symbol_table.get_variable("t") = t;
        return expression.value() * std::exp(-s * t);
    };

    // Calcular la integral de la transformada
    double a = 0;
    double b = std::numeric_limits<double>::infinity();
    double h = (b - a) / 1000.0; // Dividir en 1000 subintervalos
    double sum = 0.5 * (F(a) + F(b));
    for (int i = 1; i < 1000; i++) {
        double x = a + i * h;
        sum += F(x);
    }
    double result = h * sum;

    return result;
}

int main()
{
    std::string f_expr;
    std::cout << "Ingrese la función f(t): ";
    std::getline(std::cin, f_expr);

    double s;
    std::cout << "Ingrese el valor de s: ";
    std::cin >> s;

    double F = laplace_transform(f_expr, s);
    std::cout << "La transformada de Laplace de f(t) = " << f_expr
              << " con s = " << s << " es F(s) = " << F << std::endl;

    return 0;
}
