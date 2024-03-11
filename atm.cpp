#include <iostream>
using namespace std;

long saldo = 15000000;
const int user = 1234;
const int password = 4321;

bool validarUsuario(int usuario, int contrasenia);
void imprimirMenu();
void imprimirSaldo();
long consignar(long valor);
long retirar(long valor);
void contarBilletes(long valor);

int main() {
    int usuario1 = 0;
    int password2 = 0;

    cout << "Por favor ingrese su usuario: ";
    cin >> usuario1;
    cout << "Por favor ingrese su contrasenia: ";
    cin >> password2;

    if (validarUsuario(usuario1, password2)) {
        imprimirMenu();
        int opcion;
        cin >> opcion;

        switch (opcion) {
            case 1:
                imprimirSaldo();
                break;
            case 2:
                cout << "\nPor favor ingrese el valor que desea consignar: ";
                long valorConsignacion;
                cin >> valorConsignacion;
                consignar(valorConsignacion);
                cout << "\nSu nuevo saldo es: " << saldo;
                break;
            case 3:
                cout << "\nPor favor ingrese el valor que desea retirar: ";
                long valorRetiro;
                cin >> valorRetiro;
                if (valorRetiro <= saldo) {
                    cout << "\
