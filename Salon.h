#ifndef Salon_h
#define Salon_h
#include "Computadora.h"
#include <string>
using namespace std;

class Salon{
public:
Salon();
Salon(int s, Computadora t);
int getSalon();
Computadora getTipo();
void setSalon(int s);
void setTipo(Computadora t);

private:
int salon;
Computadora tipo;

};
Salon::Salon(){
  Computadora t(0, "", "");
  tipo = t;
  salon = 0;
}
Salon::Salon(int s, Computadora t){
  tipo = t;
  salon = s;
}
int Salon::getSalon(){
  return salon;
}
Computadora Salon:: getTipo(){
  return tipo;
}
void Salon::setSalon(int s){
  salon = s;
}
void Salon::setTipo(Computadora t){
  tipo = t;
}

#endif