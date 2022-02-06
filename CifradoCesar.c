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

    printf("\nPor favor usa únicamente letras mayúsculas del abecadario inglés.\n");
    printf("Si tienes duda de cuál es este abecesario, a continuación te presento las letras que puedes usar:\n");
    printf("%s", abc);
}

int menu(){

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

void cifrado(char abc[],char tex[]){
    int desplazamiento;
    int letra;
    int iterador;

    printf("\nIngresa el número correspondiente a el desplazamiento de las letras para el cifrado: ");
    scanf("%d",&desplazamiento);

    printf("\nEl texto introducido es: ");
    puts(tex);
    printf("\nEl texto cifrado es: ");

    while(tex[iterador] != '\0'){
        letra = 0;

        for(int i = 0; i < 26; i++){
            if( tex[iterador] == abc[i])
            letra = i;
            break;
        }
        printf("%c", abc[letra+desplazamiento]);
        iterador++;
    }
}


void decifrado(char abc[],char tex[]){
    puts(abc);
    puts(tex);
}



int main(){

    int opcion;
    char abedecarioIngles[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char texto [100];
    
    printf("Bienvenido, a continuación te pediré que ingreses el texto, después de introducirlo, te daré opciones de lo que puedes hacer.");
    printf("\nIngresa el texto: "); fflush(stdin);
    gets(texto);
   
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


/*
#include<stdio.h>
#include<string.h>

int main(){
    
    char abedecarioIngles[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char t[50];
    int i,l;
    printf("Ingresa texto: ");
    gets(t);
    
    
    
    
    i=0;
    while(t[i] != '\0'){
        for(int j=0; j < 26; j++){
            if(t[i]==abedecarioIngles[j]){
                printf("%c", abedecarioIngles[j+3]);
                break;
            }
            switch(t[i]){
                case 'X':{
                    printf("%c",'A');
                    break;
                }
                case 'Y':{
                    printf("%c",'B');
                    break;
                }
                case 'Z':{
                    printf("%c",'C');
                    break;
                }
                case ' ':{
                    printf("%c",' ');
                    break;
                }
            }break;
        }
        i++;
    }
}

*/