#include <iostream>
using namespace std;

int main() {
    
    int precio_base = 100;
    int edad;
    char tipo_boleto;

    cout << "Por favor, ingresa tu edad: ";
    cin >> edad;

    cout << "Elige el tipo de boleto (N) Normal, (E) Estudiante, (S) Senior: ";
    cin >> tipo_boleto;

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

    cout << "El precio final de tu boleto es: $" << precio_final << endl;

    return 0;
}