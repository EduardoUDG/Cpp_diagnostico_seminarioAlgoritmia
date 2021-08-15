#ifndef ALMACEN_H
#define ALMACEN_H

#include "paquete.h"
#include <vector>

class Almacen {
    vector<Paquete> paquetes;

public:
    Almacen();
    void pushPaquete(const Paquete &p);
    void mostrar();

    void insertar(const Paquete &c, size_t pos);
    size_t size();
    void inicializar(const Paquete &c, size_t n);
    void eliminar(size_t pos);

    friend Almacen& operator<<(Almacen &v, const Paquete &p)
    {
        v.pushPaquete(p);
        return v;
    }
};


#endif