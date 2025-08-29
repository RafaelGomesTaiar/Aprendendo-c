/* (Adaptado de ASCENCIO e CAMPOS, 2008) Crie um procedimento que receba a 
quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Essa pessoa vai 
passar por vários países e precisa converter seu dinheiro em dólares, euro e libra 
esterlina. Sabe-se que a cotação do dólar é de R$ 4,00, do euro é R$ 4,25 e do iene é R$ 
0,10. O procedimento deverá fazer a leitura dos dados do usuário e exibir o resultado 
das conversões diretamente, sem passagem de parâmetros. Desenvolva um algoritmo 
que invoque o procedimento para realizar os cálculos.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
     
    float dinheiroreal, dinheirodolar, dinheirolibra, dinheiroiene;

     printf("digite a quantidade de dinheiro que voce possui (EM REAL):\n");
     scanf("%f", &dinheiroreal);

     dinheirodolar = dinheiroreal/4.00;
     printf("em dólares:%f.\n", dinheirodolar);
     dinheirolibra = dinheiroreal/4.25;
     printf("em libra:%f.\n", dinheirolibra);
     dinheiroiene = dinheiroreal/0.10;
     printf("em libra esterlina:%f.\n", dinheiroiene);
}