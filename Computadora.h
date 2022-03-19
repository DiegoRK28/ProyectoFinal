#ifndef Computadora_h
#define Computadora_h
#include <string>
using namespace std;

class Computadora{
public:
Computadora();
Computadora(int r, string m, string s);
int getRam();
string getMarca();
string getSistema();
void setRam(int r);
void setMarca(string m);
void setSistema(string si);

private:
int ram;
string marca;
string sistema;

};
Computadora::Computadora(){
  ram = 0;
  marca = "";
  sistema = "";
}
Computadora::Computadora(int r, string m, string si){
  ram = r;
  marca = m; 
  sistema = si;
}
int Computadora::getRam(){
  return ram;
}
string Computadora::getMarca(){
  return marca;
}
string Computadora::getSistema(){
  return sistema;
}
void Computadora::setRam(int r){
  ram = r;
}
void Computadora::setMarca(string m){
  marca = m;
}
void Computadora::setSistema(string si){
  sistema = si;
}

#endif