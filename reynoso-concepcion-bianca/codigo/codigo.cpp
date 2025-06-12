#include <iostream>
#include <string>

using namespace std;

bool verificarCredenciales(string correo, string contrasena) ;

bool verificarCuposDisponibles();

int main() {
    string correo, contrasena;
    
    // Solicitar correo y contraseña
    cout << "Por favor ingrese su correo: ";
    cin >> correo;
    cout << "Por favor ingrese su contraseña: ";
    cin >> contrasena;

    // Verificar credenciales
    if (verificarCredenciales(correo, contrasena)) {
        cout << "Usuario registrado correctamente!" << endl;

        // Solicitar inscripción a un taller
        char inscribir;
        cout << "¿Desea inscribirse a un taller? (s/n): ";
        cin >> inscribir;

        if (inscribir == 's' || inscribir == 'S') {
            if (verificarCuposDisponibles()) {
                cout << "Inscripción realizada con éxito. Confirmación enviada." << endl;
            } else {
                cout << "Lo siento, el taller está lleno." << endl;
            }
        } else {
            cout << "Gracias por visitar la plataforma." << endl;
        }
    } else {
        cout << "Error: Credenciales incorrectas." << endl;
    }

    return 0;
}

bool verificarCredenciales(string correo, string contrasena) {
    // Aquí simulamos una validación muy simple de credenciales.
    // En la práctica, las credenciales serían verificadas con una base de datos.
    
    string correoRegistrado = "usuario@example.com";
    string contrasenaRegistrada = "1234";

    if(correo == correoRegistrado && contrasena == contrasenaRegistrada) {
        return true;
    } else {
        return false;
    }
}
bool verificarCuposDisponibles() {
    // Simulamos la verificación de cupos disponibles.
    // En este caso, asumimos que hay 3 cupos disponibles.
    int cuposDisponibles = 3;

    if(cuposDisponibles > 0) {
        return true;
    } else {
        return false;
    }
}