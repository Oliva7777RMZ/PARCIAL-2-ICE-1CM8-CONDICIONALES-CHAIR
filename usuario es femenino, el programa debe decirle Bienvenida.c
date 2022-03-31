#include<stdio.h>
//Codifique un programa que le pida al usuario su género. Si el género del usuario es femenino, el programa debe decirle "Bienvenida".
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
    return 0;
}
