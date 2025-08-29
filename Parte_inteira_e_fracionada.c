/* (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um procedimento que receba um 
número real, calcule e retorne: 
a) a parte inteira desse número; 
b) a parte fracionária desse número. 
Crie um algoritmo que peça para o usuário inserir o número real e, em seguida, calcule 
e mostre o que se pede nos itens a) e b). */

#include <stdio.h>
#include <stdlib.h>


int main(){

    double numero1, partefra; 
    int parteint;

     printf("digite um numero inteiro:\n");
     scanf("%lf", &numero1);

     parteint = (int)numero1;
     printf("a parte inteira desse numero foi:%d.\n", parteint);
     partefra = numero1 - (int)numero1;
     printf("a parte fracionada desse numero foi:%f.\n", partefra);


}