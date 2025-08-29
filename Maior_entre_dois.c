/* (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba dois números 
e mostre o maior deles. Caso eles sejam iguais, deve-se mostrar a mensagem "Os 
números são iguais".*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float numero1, numero2;

       printf("digite o primeiro numero:\n");
       scanf("%f", &numero1);
       printf("digite o segundo numero:\n");
       scanf("%f", &numero2);

    if(numero1>numero2){
       printf("o maior numero foi:%f.\n", numero1);
     }
    if(numero2>numero1){
       printf("o maior numero foi:%f.\n", numero2);
     }
    if(numero1 == numero2){
       printf("os numeros sao iguais!"); 
     }
    
      
}