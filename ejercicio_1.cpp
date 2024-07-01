//ejercicio 1
//jairo zegarra gutierrez
#include <iostream>
using namespace std;
const double PI = 3.14;
double calcularArea(double radio);

int main() {
    double radio;

    cout << "Ingrese el radio del círculo: ";
    cin >> radio;
    double area = calcularArea(radio);

    cout << "El área del círculo es: " << area << endl;

    return 0;
}

double calcularArea(double radio) {
    return PI * radio * radio;
}
