/*
        Tarea 01: Cifrado César
        Materia: Seguridad Computacional
        Autor: César Alejandro Luján García
        Porfesor: Rodriguez Arana Ricardo
*/

#include <stdio.h>


int menu(){

    short opcion;
    printf("\nHola, las opciones a realizar son:");
    printf("\n1. Cifrar un texto.");
    printf("\n2. Decifrar un texto.");
    printf("\n3. Salir");
    

    do
    {
       printf("\nHola ingresa el número entero correspondiente a la opción que quieres: ");
       scanf("%d",&opcion);
    } while (opcion != 3);
    
    return opcion;

}

void cifrado(){

}


void decifrado(){

}



int main(){

    int opcion;
    char abedecarioIngles[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    opcion = menu();


    return 0;
}