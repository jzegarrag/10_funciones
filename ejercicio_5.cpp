//ejercicio 
//jairo zegarra gutierrez
#include <iostream>
#include <cmath>
#include <tuple>

double calcularDiscriminante(double a, double b, double c) {
    return b * b - 4 * a * c;
}

std::tuple<bool, double, double> calcularRaicesReales(double a, double b, double discriminante) {
    double raiz1 = (-b + std::sqrt(discriminante)) / (2 * a);
    double raiz2 = (-b - std::sqrt(discriminante)) / (2 * a);
    return std::make_tuple(true, raiz1, raiz2);
}

std::tuple<bool, std::pair<double, double>, std::pair<double, double>> calcularRaicesComplejas(double a, double b, double discriminante) {
    double realPart = -b / (2 * a);
    double imaginaryPart = std::sqrt(-discriminante) / (2 * a);
    std::pair<double, double> raiz1(realPart, imaginaryPart);
    std::pair<double, double> raiz2(realPart, -imaginaryPart);
    return std::make_tuple(false, raiz1, raiz2);
}

int main() {
    double a, b, c;

    std::cout << "Ingrese el coeficiente a: ";
    std::cin >> a;
    std::cout << "Ingrese el coeficiente b: ";
    std::cin >> b;
    std::cout << "Ingrese el coeficiente c: ";
    std::cin >> c;

    double discriminante = calcularDiscriminante(a, b, c);

    if (discriminante >= 0) {
        auto [esReales, raiz1, raiz2] = calcularRaicesReales(a, b, discriminante);
        std::cout << "Las raíces de la ecuación cuadrática son reales: " << raiz1 << " y " << raiz2 << std::endl;
    } else {
        auto [esReales, raiz1, raiz2] = calcularRaicesComplejas(a, b, discriminante);
        std::cout << "Las raíces de la ecuación cuadrática son complejas: "
                  << raiz1.first << " + " << raiz1.second << "i y "
                  << raiz2.first << " - " << raiz2.second << "i" << std::endl;
    }

    return 0;
}