#include "paquete.h"

Paquete::Paquete()
{

}

Paquete::Paquete(const string &id, const string &origen, const string &destino, int peso)
{
    this->id = id;
    this->origen = origen;
    this->destino = destino;
    this->peso = peso;
}
void Paquete::setId(const string &v){
    id = v;
}
string Paquete::getId(){
    return id;
}
void Paquete::setOrigen(const string &v){
    origen = v;
}
string Paquete::getOrigen(){
    return origen;
}
void Paquete::setDestino(const string &v){
    destino = v;
}
string Paquete::getDestino(){
    return destino;
}
void Paquete::setPeso(float v){
    peso = v;
}
float Paquete::getPeso(){
    return peso;
}