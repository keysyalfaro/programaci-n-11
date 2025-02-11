#include <iostream>

int main() {
    int first, second;
    std::cout << "Ingrese el primer digito: ";
    std::cin >> first;
    std::cout << "Ingrese el segundo digito: ";
    std::cin >> second;
    int suma = first + second;
    int multiplicacion = first * second;
    std::cout << "La suma de " << first << " y " << second << " es: " << suma << std::endl;
    std::cout << "La multiplicacion de " << first << " y " << second << " es: " << multiplicacion << std::endl;

    return 0;
}