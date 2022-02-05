/*
    *******************************************
        Tarea 01: Cifrado César
        Materia: Seguridad Computacional
        Autor: César Alejandro Luján García
        Porfesor: Rodriguez Arana Ricardo
    *******************************************
*/

#include <stdio.h>

void instrucciones(char abc[]){

    printf("\nPor favor usa únicamente letras mayúsculas y el abecesario que usa es el abecadario inglés.\n");
    printf("Si tienes duda de cuál es este abecesario, a continuación te presento las letras que puedes usar.\n");
    printf("%s", abc);
}

int menu(){

    int op;
    printf("\nHola, las opciones a realizar son:");
    printf("\n1. Cifrar un texto.");
    printf("\n2. Decifrar un texto.");
    printf("\n3. Salir");
    

    do
    {
       printf("\nIngresa el número entero correspondiente a la opción que quieres: ");
       scanf("%d",&op);
    } while (op<1 || op>3);
    
    return op;

}

void cifrado(char abc[]){
    puts(abc);
}


void decifrado(char abc[]){
    puts(abc);
}



int main(){

    int opcion;
    char abedecarioIngles[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    printf("%s",abedecarioIngles);
    do{
        opcion = menu();
        switch (opcion)
        {
            case 1:{ 
                printf("\n**** CIFRADO ****");
                instrucciones(abedecarioIngles);
                cifrado(abedecarioIngles);
                break;
            }            
            case 2:{
                printf("\n**** DECIFRADO ****");
                instrucciones(abedecarioIngles);
                decifrado(abedecarioIngles);
                break;
            }
        }
    }while(opcion != 3);

    printf("\n¡Hasta Luego!\n");
    return 0;
}