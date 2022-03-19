//Diego de Jesús Ruíz Kwok A00830225//


#include <iostream>
#include <string>
using namespace std;

#include "Computadora.h"
#include "Salon.h"

int main() {
 int cant, ram, salon, opcion, mar = 0, sis = 0;
 string marca, sistema, t;
 Salon arrSalon[10];
 Computadora compu;
  cout << "¿Cuántos salones hay?:\n";
  cin >> cant;
 
 cout << "El numero de salon es un número entero de 4 dígitos (el primer dígito es el aula, el segundo el piso y los otros dos el número de salón). - Por ejemplo: Aulas 3, 2do piso, salón 10 = 3210.\n";
  
 if(cant > 0){

 for(int i = 0; i < cant; i++){
   cout << "Ingresa el numero de salon " << i+1 << " :" << endl;
   cin >> salon;
   arrSalon[i].setSalon(salon);
   cout << "Ingresa los datos de la computadora " << i+1 << " :" << endl;
   cout << "Capacidad RAM(GB): ";
   cin >> ram;
   compu.setRam(ram);
   cout << "Marca: ";
   cin >> marca;
   compu.setMarca(marca);
   cout << "Sistema Operativo: ";
   cin >> sistema;
   cout << endl;
   compu.setSistema(sistema);
   arrSalon[i].setTipo(compu);
   ;
 }
do{

  cout << "1.Buscar Salon por marca de computadora" <<
 "\n2.Buscar Salon por Sistema Operativo de computadora" <<
 "\n3.Mostrar los salones" <<
 "\n0.Terminar" << endl;
 cin >> opcion;

  switch(opcion){
    case 0:
    cout << "¡Hasta luego!\n";
    break;

    //Caso 1
    case 1:
    cout << "¿Que marca buscas?\n";
    cin >> marca;
   
   mar = 0;
    for(int i = 0; i < cant; i++){
      
      if(arrSalon[i].getTipo().getMarca() == marca){ 
        cout << "Salon: ";
        cout << arrSalon[i].getSalon() << endl;
        mar = 1;
      }
     
    } if(mar == 0){
         cout << "No hay salones con esa marca de computadora\n";
      }
    break;

    //Caso 2
    case 2:
    cout << "¿Que sistema operativo buscas?\n";
    cin >> sistema;
  sis = 0;
    for(int i = 0; i < cant; i++){
    if(arrSalon[i].getTipo().getSistema() == sistema){
       cout << "Salon: ";
       cout << arrSalon[i].getSalon() << endl;
        sis = 1;
    }
    }if(sis == 0){
      cout << "No hay salones que tengan computadores con ese sistema\n";
    }
    break;

   //Caso 3
    case 3:
    for(int i = 0; i< cant; i++){
      cout << "\nSalon: " << arrSalon[i].getSalon() << endl;
      cout << "Memoria RAM de la computadora: " << arrSalon[i].getTipo().getRam() << endl;
      cout << "Marca de la computadora: " << arrSalon[i].getTipo().getMarca()<< endl;
      cout << "Sistema operativo de la Computadora: " << arrSalon[i].getTipo().getSistema() << endl;
    }
    break;

    default:
    cout << "Favor de ingresar una opcion valida\n";
    break;
  }
}while(opcion != 0);
 }
 else{
   cout << "No hay salones con los cuales trabajar, ¡hasta luego!,\n";
 }
  return 0;
}