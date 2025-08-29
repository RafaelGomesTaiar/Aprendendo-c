/*Desenvolva um algoritmo que simule uma calculadora. Você deve dar a opção de o 
usuário escolher entre: 1 - Somar; 2 - Subtrair; 3 - Multiplicar; 4 - Dividir. O usuário só conseguirá processar dois números inteiros por vez. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float numero1, numero2, resto, operacoes;
    
    
     printf("digite 1 para somar\n");
     printf("digite 2 para subtrair\n");
     printf("digite 3 para multiplicar\n");
     printf("digite 4 para dividir\n");
     scanf("%f", &operacoes);
     printf("digite o primeiro numero:\n");
     scanf("%f", &numero1);
     printf("digite o segundo numero:\n");
     scanf("%f", &numero2);

     if (operacoes == 1)
    {
     resto = numero1 + numero2;
     printf("a soma dos numeros deu: %f", resto);
    }
     if (operacoes == 2)
    {
     resto = numero1 - numero2;
     printf("a subtracao dos numeros deu: %f", resto);
    }
     if (operacoes == 3)
    {
     resto = numero1 * numero2;
     printf("a multiplicacao dos numeros deu: %f", resto);
    }
     if (operacoes == 4)
    {if (numero2 !=0){
     resto = numero1 / numero2;
     printf("a divisao dos numeros deu: %f", resto);
    } else {
     printf("divisao por zero.\n");
    }
    }

}
