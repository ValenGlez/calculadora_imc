#include <iostream>
using namespace std;
int main (){
/*
[] Declarar las variables float "pesopersona" y "alturapersona"
[] Pedir al usuario que ingrese las variables declaradas en kg y m
[] Declarar la variable float "IMC" y asignarle el calculo de la formula de el IMC (P / H^2)
[] Verificar con un if si el IMC es ideal
[] Mostrar el IMC obtenido y si es ideal
*/

float pesopersona;
float alturapersona;

cout << "Ingrese su peso en kg";
cin >> pesopersona;
cout << "Ahora ingrese su altura en m";
cin >> alturapersona;

float IMC = pesopersona /(alturapersona * alturapersona);

cout << "Su IMC es de: " << IMC << endl;

if (IMC <18.5){
    cout << " Usted esta bajo de peso" << endl;
}
else if (IMC <= 25){
    cout << " Usted tiene un peso normal" << endl;
}

else if (IMC > 25){
    cout << " Usted tiene sobrepeso" << endl;
}


return 0;
}
