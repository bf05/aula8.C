#include <stdio.h>

int main() {
 
 int num1=0;
 int num2=0;
 int num3=0;
 int num4=0;
 
 printf ("digite o primeiro numero:");
 scanf ("%d" , &num1);
 
 printf ("digite o segundo numero:");
 scanf ("%d" , &num2);
 
 printf ("digite o terceiro numero:");
 scanf ("%d" , &num3);
   
 printf ("digite o quarto numero:");
 scanf ("%d" , &num4);
 

 for(int contador1 = 1; contador1 <= num1; contador1++){
     printf("*");
 }
 
 printf ("\n");
 
 
  for(int contador2 = 1; contador2 <= num2; contador2++){
     printf("*");
 }
 printf("\n");
 
 
  for(int contador3 = 1; contador3 <= num3; contador3++){
     printf("*");
 }
  printf("\n");
  
  
  for(int contador4 = 1; contador4 <= num4; contador4++){
     printf("*");
 }
 printf("\n");
 
 
     return 0;
}