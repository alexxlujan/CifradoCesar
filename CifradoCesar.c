/*
    *******************************************
        Tarea 01: Cifrado César
        Materia: Seguridad Computacional
        Autor: César Alejandro Luján García
        Porfesor: Rodriguez Arana Ricardo
    *******************************************
*/

#include <stdio.h>
#include <string.h>



void instrucciones(char abc[]){

    //Aclaraciones al usuario para el uso de este programa

    printf("\nPor favor usa únicamente letras mayúsculas del abecadario inglés.\n");
    printf("Si tienes duda de cuál es este abecesario, a continuación te presento las letras que puedes usar:\n");
    printf("%s", abc);
}

int menu(){

    //Menú de posibles acciones a realizar

    int op;
    printf("\nLas opciones a realizar son:");
    printf("\n1. Cifrar texto ingresado.");
    printf("\n2. Decifrar el texto ingresado.");
    printf("\n3. Salir");
    

    do
    {
       printf("\nIngresa el número entero correspondiente a la opción que quieres: ");
       scanf("%d",&op);
    } while (op<1 || op>3);
    
    return op;
}

void cifrado(char abc[], char tex[]){
    
    //Función para cifrar el texto.

    int desplazamiento;
    int letra;
    int iterador=0;
    
    printf("\nIngresa el número correspondiente a el desplazamiento de las letras para el cifrado: ");
    scanf("%d",&desplazamiento);

    //printf("\nIntroduzca el texto a cifrar: ");fflush(stdin);
    //fgets(tex,100,stdin); NO LAS EJECUTA SI NO ES MAIN

    printf("\nEl texto cifrado es: ");

    while(tex[iterador] != '\n'){
        for(int j = 0; j < 26; j++){
            if(tex[iterador]==' '){
                printf(" ");
                break;
            }
            if( tex[iterador] == abc[j]){
                printf("%c", abc[(j+desplazamiento)%26]);
                break;
            }
        }
        iterador++;
    }
    printf("\n");
}


void decifrado(char abc[],char tex[]){
    
    //Función para decifrar texto

    int desplazamiento;
    int letra;
    int iterador=0;
    
    printf("\nIngresa el número correspondiente a el desplazamiento de las letras para el decifrado: ");
    scanf("%d",&desplazamiento);

    //printf("\nIntroduzca el texto a cifrar: ");fflush(stdin);
    //fgets(tex,100,stdin); NO LAS EJECUTA SI NO ES MAIN

    printf("\nEl texto decifrado es: ");

    while(tex[iterador] != '\n'){
        for(int j = 0; j < 26; j++){
            if(tex[iterador]==' '){
                printf(" ");
                break;
            }
            if( tex[iterador] == abc[j]){
                if(j-desplazamiento < 0)
                    printf("%c", abc[(j-desplazamiento)+26]);
                else
                    printf("%c", abc[(j-desplazamiento)%26]);
                break;
            }
        }
        iterador++;
    }
    printf("\n");
}



int main(){

    int opcion;
    char abedecarioIngles[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char texto[100];

    printf("Bienvenido, a continuación te pediré que ingreses el texto, después de introducirlo, te daré opciones de lo que puedes hacer.");
    printf("\nIngresa el texto: ");fflush(stdin);
    fgets(texto,100,stdin);
   
    do{
        opcion = menu();
        switch (opcion)
        {
            case 1:{ 
                printf("\n**** CIFRADO ****");
                instrucciones(abedecarioIngles);
                cifrado(abedecarioIngles,texto);
                break;
            }            
            case 2:{
                printf("\n**** DECIFRADO ****");
                instrucciones(abedecarioIngles);
                decifrado(abedecarioIngles,texto);
                break;
            }
        }
    }while(opcion != 3);

    printf("\n¡Hasta Luego!\n");
    return 0;
}