/*(Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba três números 
obrigatoriamente em ordem crescente e um quarto número que não siga esta regra. 
Mostre, em seguida, os quatro números em ordem não-crescente. */

#include <stdio.h>
#include <stdlib.h>

int main() {

    float num1, num2, num3, num4;

      printf("digite o primeiro numero (ordem crescente por favor):\n");
      scanf("%f", &num1);
      printf("digite o segundo numero (ordem crescente por favor):\n");
      scanf("%f", &num2);
      printf("digite o terceiro numero (ordem crescente por favor):\n");
      scanf("%f", &num3);
      printf("digite um quarto numero que nao siga essa regra:\n");
      scanf("%f", &num4);

    if (num4 > num3){
      printf("a ordem decrescente deu: %f, %f, %f, %f.", num4, num3, num2, num1);
    }
    if ((num4 > num2) && (num4 <= num3)) {
      printf("a ordem decrescente deu: %f, %f, %f, %f.", num3, num4, num2, num1);
    }
    if ((num4 > num1) && (num4 <= num2)) {
      printf("a ordem decrescente deu: %f, %f, %f, %f.", num3, num2, num4, num1);
    }
    if ((num4 <= num1)) {
      printf("a ordem decrescente deu: %f, %f, %f, %f.", num3, num2, num1, num4);
    }
    
    



}
