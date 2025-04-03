#include <stdio.h>

int main() {
    int A;
     
     printf ("tabela verdade do operador NÃO (!)\n");
     
     for (A= 0 ; A<=1 ; A++) {
           printf("A: %d  ! %d = %d\n" , A , A , !A ); 
         }
   
     return 0;
}
