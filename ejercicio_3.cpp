//ejercicio 
//jairo zegarra gutierrez
#include <iostream>
#include <cmath>

double calcularHipotenusa(double a, double b) {
    return sqrt(a * a + b * b);
}

int main() {
    double cateto1, cateto2;

    std::cout << "Ingrese la longitud del primer cateto: ";
    std::cin >> cateto1;
    std::cout << "Ingrese la longitud del segundo cateto: ";
    std::cin >> cateto2;
    
    double hipotenusa = calcularHipotenusa(cateto1, cateto2);

    std::cout << "La hipotenusa del triángulo rectángulo es: " << hipotenusa << std::endl;

    return 0;
}