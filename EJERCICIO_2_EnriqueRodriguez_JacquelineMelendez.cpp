// Ejercicio 2. Programa que emplee instrucciones repetitivas para determinar el numero de vehiculos cuyo precio de venta se menor de $25.000, entre $75.000 y $120.000, y mayores de $120.000 de un total de numero de ventas realizadas mensualmente ingresadas por teclado.
#include <iostream>
using namespace std;

int main() {
    int n;
    int menor25k=0;
    int entre75k_120k=0;
    int mas120k=0;
    float precio;
    
    cout<<"Ingrese el total de ventas: "<<endl;
    cin>> n;
    
    for(int i=0; i<=n; i++){
        cout<< "Ingrese el precio del vehiculo: "<<endl;
        cin>> precio;
        
        if(precio < 25000){
            menor25k++;
        }
        else if(precio >=75000 && precio <=120000){
            entre75k_120k++;
        }
        else if(precio >120000){
            mas120k++;
        }
    }
    
    cout<<"Vehiculos con un precio menor de 25.000: "<<menor25k<<endl;
    cout<<"Vehiculos con un precio entre de 75.000 y 120.000: "<<entre75k_120k<<endl;
    cout<<"Vehiculos con un precio mayor a 120.000: "<<mas120k<<endl;


    return 0;
}
