#include <iostream>
#include "variables.h"
using namespace std;

/*prototipo de funciones*/
void menu();
void ingresarEdades();
void principal();

/*funciones*/
void menu(){
    system("cls||clear");
cout<<"1-Ingresar edades"<<endl;
cout<<"2-Mostrar edades"<<endl;
cout<<"3-Mostrar edad mayor"<<endl;
cout<<"4-Mostrar edad menor"<<endl;
cout<<"5-Mostrar promedio de edades"<<endl;
cout<<"6-Salir"<<endl;
}
/*Agregar edades*/
void ingresarEdades(){
    system("cls||clear");
    cout<<"Dime la edad: ";
    cin >> ages[pos];
    pos++;
    system("pause");
}

void principal(){

     int option=0;
    while (option!=6)
    {
        menu();
        cout << "Dime una opcion";
        cin >> option;
        switch (option)
        {
        case 1:
            ingresarEdades();
            break;
        case 2:
            cout<<"Adios"<<endl;
            break;
        default:
            break;
        }
        cin>>option;
    }
    
}

void showAges(){
    system("cls||clear");
    cout<<"tu edad papi"<<endl;
}
