#define MAXREGISTERS 100
#define MAXCHAR 60
/*La estructura organiza informacion o conjuntos de elementos
 relacionada entre si, siempre termina con punto y coma al final de la llave*/

typedef struct PERSON{

    char cif[MAXCHAR];
    char name[MAXCHAR];
    char lastname[MAXCHAR];
    int grade;
};

