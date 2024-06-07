#include<iostream>
using namespace std;

int Maximo=9999;
double cantidad;
int Suma=0;
void Sumadenumeros();
int main(int argc, char const *argv[])
{
 Sumadenumeros();
    return 0;
}
void Sumadenumeros(){
    do {
    cout << "Indique una cantidad a sumar" << endl;
    cin >> cantidad;
    if (Suma<=9998){
        Suma=Suma+cantidad;
        cout << "La suma en este momento es: " << Suma << endl; 
    }
    else 
    {
        cout << "La carga ha finalizado"<<endl;
        cout << "La suma total es: "<<9999<<endl;
    }    
    }
    while (Suma<=9998);
   

}
