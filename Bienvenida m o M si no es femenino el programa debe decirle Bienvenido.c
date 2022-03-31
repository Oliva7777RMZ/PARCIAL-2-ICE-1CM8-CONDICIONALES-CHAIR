#include<stdio.h>
//genero del usuario es femenino, 
//el programa debe decirle "Bienvenida" m o M ; si no es femenino,
//el programa debe decirle "Bienvenido".
int main (){
  //Compilar
  char genero;
  //Pedir datos
  printf ("Genero ");
  scanf ("%c", &genero);
  //Condicional
  if (genero == 'm'){
      printf ("bienvenida");
    }
  else{
      if (genero == 'M'){
       printf("Bienvenida ");
	}
  else{
	    printf("Bienvenido ");
	}
 }
  return 0;
}
