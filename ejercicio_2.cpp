//ejercicio 2
//jairo zegarra gutierrez
#include <iostream>
#include <cstdlib>
#include <ctime>

void inicializarSemilla() {
    srand(static_cast<unsigned int>(time(0)));
}

int generarNumeroAleatorio(int min, int max) {
    return min + rand() % ((max + 1) - min);
}

int main() {
    int cantidad, min, max;

    std::cout << "Ingrese la cantidad de números aleatorios a generar: ";
    std::cin >> cantidad;
    std::cout << "Ingrese el valor mínimo: ";
    std::cin >> min;
    std::cout << "Ingrese el valor máximo: ";
    std::cin >> max;

    inicializarSemilla();

    std::cout << "Números aleatorios generados:\n";
    for (int i = 0; i < cantidad; ++i) {
        std::cout << generarNumeroAleatorio(min, max) << " ";
    }
    std::cout << std::endl;

    return 0;
}
