#include <stdio.h>

int main() {
    int numero , somapares = 0;
    
    while (1) {
        printf ("digite um numero: ");
        scanf ("%d"  , &numero);
        
        if(numero % 2 == 0) {
            somapares += numero ; 
             }  else {
                 break;
             }
             
    }
    
    printf("soma dos numeros pares : %d\n" , somapares);
     return 0;
}