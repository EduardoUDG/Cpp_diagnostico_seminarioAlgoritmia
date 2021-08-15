#include "almacen.h"
#include <fstream>
#include <algorithm>

Almacen::Almacen() { }

void Almacen::pushPaquete(const Paquete &p)
{   
    paquetes.push_back(p);
}

void Almacen::mostrar()
{
    cout << left;
    cout << setw(5) << "ID";
    cout << setw(20) << "Origen";
    cout << setw(20) << "Destino";
    cout << setw(15) << "Peso";
    cout << endl;

    for (size_t i = 0; i < paquetes.size(); i++){
        Paquete &p = paquetes[i];
        cout << p;
    }
    
}

void Almacen::insertar(const Paquete &c, size_t pos){
    paquetes.insert(paquetes. begin()+pos, c);
}

size_t Almacen::size(){
    return paquetes.size();
}

void Almacen::inicializar(const Paquete &c, size_t n){
 paquetes = vector<Paquete>(n, c);
}

void Almacen::eliminar(size_t pos){
    paquetes.erase(paquetes.begin()+pos);
}


