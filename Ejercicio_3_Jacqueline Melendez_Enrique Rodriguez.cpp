// Ejercicio 3. 
#include <iostream>
using namespace std;
int main() {
string nombre;
char opc;
int alumnos=0;
int nota=0;
int promedio, suma=0;
int mayor=0;
int menor=5;

do{
cout<<"Cuantos alumnos hay?: ";
cin>>alumnos;
for(int i=0; i<alumnos; i++){
    cout<<"Nombre del estudiante: ";
    cin>>nombre;
    cout<<"Nota: ";
    cin>>nota;
    suma+=nota;
    if(i==0){
          menor=nota;  
    }
if(nota<menor){
    menor=nota;
}
     if(nota>mayor){
         mayor=nota;
}
promedio=suma/alumnos;
}
cout<<"La nota mayor es: "<<mayor<<endl;
cout<<"La nota menor es: "<<menor<<endl;
cout<<"El promedio es: "<<promedio<<endl;
cout<<"Si desea ingresar otras notas escriba 'S': ";
 cin>>opc;
}
while(opc=='S'||opc=='s');
    return 0;
}
