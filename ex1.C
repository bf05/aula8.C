#include <stdio.h>

int main() {
 
 int contador = 1;
 int fim = 3;
 int numero = 0;
 
do{
  printf("digite um numero:") ;
  scanf ("%d" , &numero) ;
  
  if (numero==7) {
      printf("voce ganhou!") ;
      contador = fim; 
     } else {
        contador++;
          if (contador < fim ) {
          printf ("numero errado. tentativas restantes: %d .\n", fim - contador );
          }else{
            printf ("fim de jogo!\n") ;
          }
      } 
        
     

    
} while( contador <= fim  ) ;
    return 0;
}