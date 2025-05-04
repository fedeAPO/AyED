#include <iostream>
#include <string>

int main(){
    using namespace std;
    string nombre, apellido;

    cout << "Ingrese su nombre " << endl;
    cin >> nombre;
    cout << "Ingrese su apellido" << endl;
    cin >> apellido;

    cout << "Hola " << nombre << " " << apellido;

    return 0;
}
