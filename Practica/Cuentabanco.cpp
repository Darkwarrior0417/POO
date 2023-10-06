#include <iostream>
#include <string>
#include "Cuentabancaria.h"

using namespace std;

int main() {
    int numeroCuenta;
    string propietario;

    cout << "Ingrese el numero de cuenta: ";
    cin >> numeroCuenta;
    cout << "Ingrese el nombre del propietario: ";
    cin.ignore(); // para evitar problemas
    getline(cin, propietario);

    CuentaBancaria cuenta(numeroCuenta, propietario);

    int opcion;
    double monto;

    do {
        cout << "\n Menú de opciones:" << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Depositar dinero" << endl;
        cout << "3. Retirar dinero" << endl;
        cout << "4. Mostrar informacion de la cuenta" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "Saldo actual: " << cuenta.consultarSaldo() << endl;
            break;
        case 2:
            cout << "Ingrese la cantidad a depositar: ";
            cin >> monto;
            cuenta.depositar(monto);
            cout << "Depósito realizado." << endl;
            break;
        case 3:
            cout << "Ingrese la cantidad a retirar: ";
            cin >> monto;
            cuenta.retirar(monto);
            break;
        case 4:
            cuenta.mostrarInformacion();
            break;
        case 0:
            cout << "Saliendo del programa." << endl;
            break;
        default:
            cout << "Opción no valida. Intente de nuevo." << endl;
        }
    } while (opcion != 0);

    return 0;
}