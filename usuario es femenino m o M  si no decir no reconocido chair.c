#include<stdio.h>
//Codifique un programa que le pida al usuario su género.
//Si el género del usuario es femenino m o M , el programa debe decirle "Bienvenida".
//Char solo se utiliza para almacenar 1 caracter
int main(){
    //Compilar
    char genero;
    //Pedir datos
    printf(" Mujer = m\n " );
    printf("Genero ");
    scanf("%c",&genero);
    //Condicional
    if(genero == 'm'){
        printf(" Bienvenida ");
    }
    else{
        if(genero == 'M'){
            printf(" Bienvenida ");
        }
        else{
            printf("NO Reconocido ");
        }
    }
    return 0;
}

