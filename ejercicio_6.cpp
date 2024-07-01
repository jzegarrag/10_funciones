//ejercicio 
//jairo zegarra gutierrez
include <iostream>
#include <cstdlib>
#include <ctime>

std::string obtenerEleccionComputadora() {
    std::string opciones[3] = {"Piedra", "Papel", "Tijeras"};
    int indice = rand() % 3;
    return opciones[indice];
}

std::string obtenerEleccionUsuario() {
    std::string eleccion;
    std::cout << "Ingrese su elección (Piedra, Papel, Tijeras): ";
    std::cin >> eleccion;
    return eleccion;
}

std::string determinarGanador(std::string usuario, std::string computadora) {
    if (usuario == computadora) {
        return "Empate";
    } else if ((usuario == "Piedra" && computadora == "Tijeras") ||
               (usuario == "Papel" && computadora == "Piedra") ||
               (usuario == "Tijeras" && computadora == "Papel")) {
        return "Usuario";
    } else {
        return "Computadora";
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int puntajeUsuario = 0;
    int puntajeComputadora = 0;

    while (puntajeUsuario < 3 && puntajeComputadora < 3) {
        std::string eleccionUsuario = obtenerEleccionUsuario();
        std::string eleccionComputadora = obtenerEleccionComputadora();

        std::cout << "La computadora eligió: " << eleccionComputadora << std::endl;

        std::string ganador = determinarGanador(eleccionUsuario, eleccionComputadora);

        if (ganador == "Empate") {
            std::cout << "Es un empate!" << std::endl;
        } else if (ganador == "Usuario") {
            std::cout << "El usuario gana esta ronda!" << std::endl;
            puntajeUsuario++;
        } else {
            std::cout << "La computadora gana esta ronda!" << std::endl;
            puntajeComputadora++;
        }

        std::cout << "Puntaje -> Usuario: " << puntajeUsuario << " Computadora: " << puntajeComputadora << std::endl;
    }

    if (puntajeUsuario == 3) {
        std::cout << "Felicidades! El usuario ha ganado el juego!" << std::endl;
    } else {
        std::cout << "La computadora ha ganado el juego. Mejor suerte la próxima vez!" << std::endl;
    }

    return 0;
}