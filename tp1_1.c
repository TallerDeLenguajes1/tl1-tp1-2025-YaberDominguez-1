#include <stdio.h>

int main()
{
    printf("\n Hola Mundo");
    int a = 1056;
    int *p = &a;
    printf("\nContenido de p: %d", *p);
    printf("\nDireccion que apunta p: %p", p);
    printf("\nDireccion de memoria de a: %p", &a);
    printf("\nDireccion de memoria de p: %p", &p);
    printf("\nTamanio de memoria de a: %d",sizeof(a));

    return 0;
}