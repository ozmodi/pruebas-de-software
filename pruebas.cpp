#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int edad, sexo;

cout<<"\n Cual es su edad: ";
cin >> edad;
cout<<"\n Cual es tu sexo: ";
cin >>sexo;

if(edad >= 18){
    if(sexo == 1){
        cout << "Hola! puedes entrar";}
    else{
        cout << "Losiento, no puedes entrar";}
    }
else{
    cout <<" Losiento, no puedes entrar";}
return 0;
}
