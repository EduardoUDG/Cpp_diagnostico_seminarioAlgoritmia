#ifndef PAQUETE_H
#define PAQUETE_H

#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string>

using namespace std;

class Paquete{
private:
    string id;
    string origen;
    string destino;
    int peso;
public:
    Paquete();
    Paquete(const string &id, 
              const string &origen,
              const string &destino,
              int peso);
    void setId(const string &v);
    string getId();
    void setOrigen(const string &v);
    string getOrigen();
    void setDestino(const string &fuerza);
    string getDestino();
    void setPeso(int v);
    int getPeso();

    /* Primera carga de operador */
    friend ostream& operator<<(ostream &out, const Paquete &p)
    {
        out << left;
        out << setw(5) << p.id;
        out << setw(20) << p.origen;
        out << setw(20) << p.destino;
        out << setw(15) << p.peso;
        out << endl;
        return out;
    }

    /* Segunda carga de extraccion */
    friend istream& operator>>(istream &in, Paquete &p)
    {
        cout << "ID: ";
        getline(cin, p.id);
        
        cout << "Origen: ";
        getline(cin, p.origen);
        
        cout << "Destino: ";
        getline(cin, p.destino);
        
        cout << "Peso: ";
        cin >> p.peso;

        return in;
    } 

    bool operator==(const Paquete& c){
        return origen == c.origen;
    }
    bool operator==(const Paquete& c) const{
        return origen == c.origen;
    }
    bool operator<(const Paquete& c){ 
        return origen < c.origen;
    }
    bool operator<(const Paquete& c) const{ 
        return origen < c.origen;
    }
};

#endif