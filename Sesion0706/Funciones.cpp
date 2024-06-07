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

void agregar(CIUDAD *c)
{
    ciudades[pos] = *c;
    pos++;
}

CIUDAD buscar(int ID)
{
    for (int i = 0; i < pos; i++)
    {
        if (ID == ciudades[i].ID)
        {
            return ciudades[i];
        }
    }
    CIUDAD c;
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
    cout << "2. Editar\n";
    cout << "3.Eliminar\n";
    cout << "4.Buscar\n";
    cout << "5.Mostrar Todo\n";
    cout << "6. Salir\n";
    cout << "Digite la opcion\n";
    cin >> op;
    return op;
}
void principa()
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
    cin >> ciudad.Nombre;
    cout << "Descripcion: ";
    cin >> ciudad.Descripcion;
    agregar(&ciudad);
    cout << "Registro agregado...\n";
}
