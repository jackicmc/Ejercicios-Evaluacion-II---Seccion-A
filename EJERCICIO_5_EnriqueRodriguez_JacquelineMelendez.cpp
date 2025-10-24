//Ejercicio 5. Programa que lea una palabra y determine si es un palindromo 
#include <iostream>
using namespace std;

int main() {
    char opc;
    string palabra;
    bool Palindromo=true;
    
    do{
    
    cout<<"Ingrese una palabra (en Minusculas): "<<endl;
    cin>> palabra;
    
    int longitud = palabra.length();
    
    for(int i=0; i <longitud / 2; i++){
        if (palabra[i] != palabra [longitud - 1 - i]){
            Palindromo= false;
            break;
        }
    }
    if (Palindromo){
        cout<<"Es Palindromo"<< endl;
    }
    else{
        cout<<"No es Palindromo"<< endl;
    }
    
    cout<<"Desea ingresar otra palabra? (s/n): "<<endl;
    cin>>opc;
    
    }while(opc=='s'|| opc== 'S');
    


    return 0;
}
