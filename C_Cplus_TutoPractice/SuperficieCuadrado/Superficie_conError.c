#include<stdio.h>

int main()
{
    int lado;
    int superficie;
    printf("Ingrese el valor del lado del cuadrado:");
    scanf("%i",&lado);
    superficie = lado * lado * lado; //Presenta un error logico
    printf("La superficie del cuadrado es:");
    printf("%i",superficie);
    getch();
    return 0;
}