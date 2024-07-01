//ejercicio 
//jairo zegarra gutierrez
#include <iostream>
#include <cmath>
#include <tuple>
#include <complex>

std::tuple<std::complex<double>, std::complex<double>> calcularRaices(double a, double b, double c) {
    std::complex<double> discriminante = std::sqrt(std::complex<double>(b * b - 4 * a * c));
    std::complex<double> raiz1 = (-b + discriminante) / (2 * a);
    std::complex<double> raiz2 = (-b - discriminante) / (2 * a);
    return std::make_tuple(raiz1, raiz2);
}

int main() {
    double a, b, c;

    std::cout << "Ingrese el coeficiente a: ";
    std::cin >> a;
    std::cout << "Ingrese el coeficiente b: ";
    std::cin >> b;
    std::cout << "Ingrese el coeficiente c: ";
    std::cin >> c;

    auto [raiz1, raiz2] = calcularRaices(a, b, c);

    std::cout << "Las raíces de la ecuación cuadrática son: " << raiz1 << " y " << raiz2 << std::endl;

    return 0;
}