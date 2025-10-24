//Ejercicio 6. 
#include <iostream>
using namespace std;
int main() {
    char opc;
  int multiplicandoA, multiplicandoB=0;
  int multiplicadorA, multiplicadorB=0;
  
  do{
  cout<<"Ingrese el rango de multiplicandos: ";
  cin>>multiplicandoA>>multiplicandoB;
  cout<<"Ingrese el rango de multiplicadores: ";
  cin>>multiplicadorA>>multiplicadorB;
  
  for(int i=multiplicandoA; i<=multiplicandoB; i++){
      cout<<"Tabla de multiplicacion del "<<i<<endl;
      for(int j=multiplicadorA; j<=multiplicadorB; j++ ){
          cout<<i<<"x"<<j<<'='<<i+j<<endl;
      }
  }
  cout<<"Si desea ingresar otro rango escriba 'S': ";
  cin>>opc;
    }
  while(opc=='s'|| opc=='S');

    return 0;
}
