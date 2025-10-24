// Ejercicio 1. realice un programa que permita convertir numeros  romanos a enteros. sin usar maps/diccionario/tablas hash, solo sentencias repetitivas
#include <iostream>
using namespace std;

int main() {
    char opc;
    string romano;
    int total=0;
    do{
    cout<<"Ingrese un numero romano (En Mayuscula): "<<endl;
    cin>> romano;

    

    
    for(int i=0; i< romano.length(); i++){
        int actual=0;
        int siguiente=0;
        
        if (romano[i] == 'I') actual =1;
        else if (romano[i] == 'V') actual =5;
        else if (romano[i] == 'X') actual =10;
        else if (romano[i] == 'L') actual =50;
        else if (romano[i] == 'C') actual =100;
        else if (romano[i] == 'M') actual =500;
        else if (romano[i] == 'D') actual =1000;
        else{
            cout<<"Letra invalida"<< romano[i]<< endl;
            return 1;
        }
        
        if (i + 1 < romano.length()){
            if (romano[i + 1]== 'I') siguiente = 1;
            if (romano[i + 1]== 'V') siguiente = 5;
            if (romano[i + 1]== 'X') siguiente = 10;
            if (romano[i + 1]== 'L') siguiente = 50;
            if (romano[i + 1]== 'C') siguiente = 100;
            if (romano[i + 1]== 'M') siguiente = 500;
            if (romano[i + 1]== 'D') siguiente = 1000;
        }
        
        if (siguiente>actual){
            total -= actual;
        }
        else{
            total+= actual;
        }
        
    }
    cout<<"El total es: "<< total<<endl;
    
    
    cout<<"\nDesea ingresar otro numero? (s/n) "<<endl;
    cin>>opc;
    
    }while(opc== 's'|| opc== 'S');

    return 0;
}
