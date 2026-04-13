#include <stdio.h>

int cuadrado(int numero)
{
    return numero*numero;
}
void cuadrado2(int *numero)
{
    *numero = (*numero) * (*numero);
}
void datos(int *numero)
{
    printf("\nEl contenido de la variable: %d", *numero);
    printf("\nDireccion de la variable: %p", numero);
}
void invertir(int *a, int *b)
{
    int auxiliar = *a;
    *a = *b;
    *b = auxiliar;
}
void ordenado(int *a, int *b)
{
    int mayor;
    if (*a > *b)
    {
        mayor = *a;
        *a = *b;
        *b = mayor;
    }
}
int main()
{
    int numeroa, numerob;
    printf("Ingrese dos numeros:\n");

    printf("Ingrese el primer numero:\n");
    scanf("%d",&numeroa);

    printf("Ingrese el segundo numero:\n");
    scanf("%d",&numerob);

    printf("\nLos datos de las variables inicializadas:");
    datos(&numeroa);
    datos(&numerob);

    printf("\nDatos ordenados:");
    ordenado(&numeroa, &numerob);

    printf("\n Numero mas chico: %d", numeroa);
    printf("\n Numero mas grande: %d", numerob);

    printf("\nValores invertidos: ");

    invertir(&numeroa, &numerob);

    printf("\nValor del numero A: %d", numeroa);
    printf("\nValor del numero B: %d", numerob);

    cuadrado2(&numeroa);

    printf("\n Numero A al cuadrado: %d", numeroa);

    numerob = cuadrado(numerob);

    printf("\n Numero B al cuadrado: %d", numerob);
    
    return 0; 
}