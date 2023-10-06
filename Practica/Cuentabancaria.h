#include <iostream>
#include <string>

using namespace std;

class CuentaBancaria {
private:
    double saldo;
protected:
    int numeroDeCuenta;
public:
    string propietario;

    // Constructor
    CuentaBancaria(int numero, string nombre) : numeroDeCuenta(numero), propietario(nombre), saldo(50.0) {}

    double consultarSaldo() {
        return saldo;
    }

protected:
    void realizarTransaccion(double monto) {
        saldo += monto;
    }

public:
    void depositar(double monto) {
        realizarTransaccion(monto);
    }

    void retirar(double monto) {
        if (monto <= saldo) {
            realizarTransaccion(-monto);
        }
        else {
            cout << "Saldo insuficiente" << endl;
        }
    }

    void mostrarInformacion() {
        cout << "Número de cuenta: " << numeroDeCuenta << endl;
        cout << "Propietario: " << propietario << endl;
        cout << "Saldo actual: " << saldo << endl;
    }
};