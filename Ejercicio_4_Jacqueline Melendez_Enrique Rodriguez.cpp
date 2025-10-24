// Ejercicio 4.
#include <iostream>
using namespace std;
int main() {
    char opc;
 int cantidad=0;
 int suma=0;
 int n=0;
 int promedio=0;
 int mayor=0;
 
 do{
 cout<<"Cuantos numeros desea calcular: "; 
 cin>>cantidad;
 for(int i=0; i<cantidad; i++){
     cout<<"Ingrese un numero: "; 
     cin>>n;
     suma+=n;
     promedio=suma/cantidad;
     if(n>mayor){
         mayor=n;
     }
    
 }
 cout<<"La suma es: "<<suma<<endl;
 cout<<"El numero mayor es: "<<mayor<<endl;
 cout<<"El promedio es: "<<promedio<<endl;
 cout<<"Si desea ingresar otros numeros escriba 'S': ";
 cin>>opc;
    }
    while(opc=='s'||opc=='S');
    return 0;
}
