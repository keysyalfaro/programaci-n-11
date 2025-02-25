#include <iostream>

int main() {
    int precio_base = 100;
    int edad;
    char tipo_boleto;

    std::cout << "Por favor, ingresa tu edad: ";
    std::cin >> edad;

    std::cout << "Elige el tipo de boleto (N) Normal, (E) Estudiante, (S) Senior: ";
    std::cin >> tipo_boleto;

    tipo_boleto = toupper(tipo_boleto);

    float precio_final;

    if (edad < 5) {
        precio_final = 0;
    } 
    else if (tipo_boleto == 'E') {
        precio_final = precio_base * 0.5;
    } 
    else if (tipo_boleto == 'S' && edad > 60) {
        precio_final = precio_base * 0.7;
    } 
    else {
        precio_final = precio_base;
    }

    std::cout << "El precio final de tu boleto es: $" << precio_final << std::endl;

    return 0;
}