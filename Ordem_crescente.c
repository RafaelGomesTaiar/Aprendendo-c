/*(Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba três números 
distintos e mostre-os em ordem crescente. */

#include <stdio.h>
#include <stdlib.h>

int main(){

    float num1, num2, num3;

       printf("digite o primeiro numero:\n");
       scanf("%f", &num1);
       printf("digite o segundo numero:\n");
       scanf("%f", &num2);
       printf("digite o terceiro numero:\n");
       scanf("%f", &num3);

    if ((num1 < num2) && (num1 < num3))
    {
       if (num2 < num3)
       { printf("ordem crecente: %.2f , %.2f , %.2f.\n", num1, num2, num3);}
       else { printf("ordem crescente: %.2f, %.2f, %.2f.\n", num1, num3, num2);}
    }
     if ((num2 < num1) && (num2 < num3))
    {
       if (num1 < num3)
       { printf("ordem crecente: %.2f , %.2f , %.2f.\n", num2, num1, num3);}
       else { printf("ordem crescente: %.2f, %.2f, %.2f.\n", num2, num3, num1);}
    }
      if ((num3 < num1) && (num3 < num2))
    {
       if (num1 < num2)
       { printf("ordem crecente: %.2f , %.2f , %.2f.\n", num3, num1, num2);}
       else { printf("ordem crescente: %.2f, %.2f, %.2f.\n", num3, num2, num1);}
    }
    



}