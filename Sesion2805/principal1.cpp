#include <iostream>
#include "variables.h"
using namespace std;

int main()
{
    AGENDA datos;
    printf("Dime tu nombre: ");
    scanf(" %[^\n]", datos.Nombre);
    printf("Dime tu Edad: ");
    scanf("%i", &datos.Edad);
    printf("Dime tu Direccion: ");
    scanf(" %[^\n]", datos.Direccion);
    printf("Dime tu Ciudad: ");
    scanf(" %[^\n]", datos.Ciudad);
    printf("Dime tu Telefono: ");
    scanf(" %[^\n]", datos.Telefono);
    return 0;
}
