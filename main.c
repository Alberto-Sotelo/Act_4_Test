#include <stdlib.h>
#include <stdio.h>
#include "personaje.h"

void capturar_entero(){
    int enteros [5];
    float promedio;
    int suma = 0;
    for (size_t i = 0; i < 5; i++) //Captura enteros
    {
        scanf("%i", &enteros[i]);
    }
    
    for (size_t i = 0; i < 5 ; i++) //Imprime enteros
    {
        printf("%i\n", enteros[i]);
    }

    for (size_t i = 0; i < 5 ; i++) //Calcula suma
    {
        suma = suma + enteros[i]; //suma += enteros[i]
    }
    printf("Suma: %i\n", suma); //Immprime suma
    printf("Promedio: %f\n", suma/5.0); //Imprime promedios
}

void mostrar(int n, char cadena[]){
    for (size_t i = 0; i < n; i++)
    {
        printf("%s", cadena);
    }
    
}
int main(){
char op; 
char cadena[20];
int n;

do
{
    printf("1. Capturar enteros\n");
    printf("2. Mostrar cadena n veces\n");
    printf("3. Agregar personaje\n");
    printf("4. Mostrar personajes\n");

    printf("0. Salir\n");
    scanf("%c", &op);

    switch (op)
    {
    case '1':
        capturar_entero();
        break;
    
    case '2':
        printf("Escribe una cadena de hasta 20 caracteres: ");
        fflush(stdin);    
        scanf("%s", cadena);
        printf("n: ");
        scanf("%i", &n);
        mostrar(n, cadena);
        break;

    case '3':
        capturar_personajes();
        break;    
    case '4': 
        mostrar_personajes();
        break;
     default:
     break;    
    }
    
    fflush(stdin);
} while (op != '0');


return 0;
}