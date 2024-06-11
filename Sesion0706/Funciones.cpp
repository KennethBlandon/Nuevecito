#include <iostream>
#include <locale.h>
#include "variables.h"
#include <string.h>
using namespace std;

CIUDAD ciudades[MAX_REG];
// crud//
int obtPos(int ID);
int pos = 0;
void agregar(CIUDAD *c);
void editar(CIUDAD *c, int ID);
void eliminar(int ID);
CIUDAD buscar(int ID);
int menu();
void principal();
void pedirDatos();
void MostrarDatos();
void buscarxID();

void agregar(CIUDAD *c)
{
    ciudades[pos] = *c;
    pos++;
}

CIUDAD buscar(int ID)
{
    CIUDAD c ;
    c.ID = 0;
    for (int i = 0; i < pos; i++)
    {
        if (ID == ciudades[i].ID)
        {
            return ciudades[i];
        }
    }
    
    return c;
    
}

int obtPos(int ID)
{
    for (int i = 0; i < pos; i++)
    {
        if (ciudades[i].ID == ID)
        {
            return i;
        }
    }
    return -1;
}

void editar(CIUDAD *c, int ID)
{
    int posi = obtPos(ID);
    strcpy(ciudades[posi].Nombre, c->Nombre);
    strcpy(ciudades[posi].Descripcion, c->Descripcion);
}

void eliminar(int ID)
{
    int posi = obtPos(ID);
    for (int i = posi; i < pos - 1; i++)
    {
        ciudades[i] = ciudades[i + 1];
    }
    pos--;
}
int menu()
{
    int op;
    cout << "Menu \n";
    cout << "1.Agregar\n";
    cout << "2.Editar\n";
    cout << "3.Eliminar\n";
    cout << "4.Buscar\n";
    cout << "5.Mostrar Todo\n";
    cout << "6.Salir\n";
    cout << "Digite la opcion\n";
    cin >> op;
    return op;
}
void principal()
{
    int op;
    do
    {
        op = menu();
        switch (op)
        {
        case 1:
            pedirDatos();
            break;
        case 4:
            buscarxID();
            break;
        case 5:
        MostrarDatos();
        break;
        case 6:
            cout << "Adios, Mi tierno\n";
            break;
        default:
            cout << "No seas animal si solo hay 6\n";
            break;
        }
    } while (op != 6);
}

void pedirDatos()
{
    CIUDAD ciudad;
    cout << "Datos de ciudad\n";
    cout << "ID: ";
    cin >> ciudad.ID;
    cout << "Nombre: ";
    scanf(" %[^\n]", ciudad.Nombre);
    cout << "Descripcion: ";
    scanf(" %[^\n]", ciudad.Descripcion);
    agregar(&ciudad);
    cout << "Registro agregado...\n";
}

void MostrarDatos(){
    for (int i = 0; i<pos; i++){
        cout << "ID" << ciudades[i].ID << endl;
        cout << "Nombre: " << ciudades[i].Nombre << endl;
        cout << "Descripcion: " << ciudades[i].Descripcion << endl;
    }
}

void buscarxID(){
    int ID;
    cout << "Dime el ID de la ciudad a buscar: ";
    cin >> ID;
    CIUDAD c;
    c = buscar(ID);
    cout << "============================" << endl;
    cout << c.ID << endl;
    cout << c.Nombre << endl;
    cout << c.Descripcion << endl;
    cout << "============================" << endl;

}
