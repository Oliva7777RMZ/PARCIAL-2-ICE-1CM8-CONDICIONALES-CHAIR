#include<stdio.h>
int main(){
    //compilar
    char estadocivil;
    //pedir datos
    printf("Ingresa tu estado civil ");
    scanf("%c",&estadocivil);
    //Condicional
   //Condicional
   if(estadocivil == 's'){
            printf("Soltero ");
        }
        else{
            if(estadocivil == 'S'){
                printf("Soltero ");
            }
            else{
                if(estadocivil == 'c'){
                    printf("Casado ");
                }
                else{
                    if(estadocivil == 'C'){
                        printf("Casado ");
                    }
                    else{
                        if(estadocivil == 'd'){
                            printf("Divorciado ");
                        }
                        else{
                            if(estadocivil == 'D'){
                                printf("Divorciado ");
                            }
                            else{
                                if(estadocivil == 'v'){
                                    printf("Viudo");
                                }
                                else{
                                    if(estadocivil == 'V'){
                                        printf("Viudo ");
                                    }
                                    else{
                                    	printf("Estado Invalido ");
									}
                                }
                                
                            
                            }
                        }
                    }
                }
            }
        }
    return 0;
}