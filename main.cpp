#include<iostream>
#include<conio.h>
#include<cstdlib>

#include "almacen.h"

using namespace std;

int main(){

    Almacen l;
    string op;

    while (true){
        
        system("cls");
        cout << "1) Agregar paquete" << endl;
        cout << "2) Eliminar" << endl;
        cout << "3) Mostrar" << endl;
        cout << "0) Salir" << endl;
        cout << "Opcion:" << endl;
        getline(cin, op);
        cout << endl;


        if (op == "1"){
            Paquete c;

            cin >> c;
            l.pushPaquete(c);
            cin.ignore();
        }
        else if (op == "2"){
            size_t pos = 0;
            l.eliminar(pos);
        }
        else if (op == "3"){
            l.mostrar();
            cout << endl;
            system("pause");

        }
        else if (op == "0")
        {
            system("pause");
            break;
        }
    }
    
    getch();
    return 0;
}
