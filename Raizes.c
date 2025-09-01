/*Desenvolva um algoritmo que peça ao usuário que informe os coeficientes a, b e c de 
uma equação de segundo grau: ax² + bx + c. Com base na Fórmula de Bhaskara, calcule 
e mostre as raízes da respectiva equação de segundo grau. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float coe_a, coe_b, coe_c, delta, x1, x2;

      printf("digite o primeiro coeficiente:\n");
      scanf("%f", &coe_a);
      printf("digite o segundo coeficiente:\n");
      scanf("%f", &coe_b);
      printf("digite o terceiro coeficiente:\n");
      scanf("%f", &coe_c);

    delta = coe_b*coe_b-4*coe_a*coe_c;

    if (delta<0)
    {
      printf("raizes fora dos dominios dos numeros reias.\n");
    }
    else 
    {
      x1 = (-coe_b+sqrt(delta))/(2*coe_a);
      x2 = (-coe_b-sqrt(delta))/(2*coe_a);
      printf("primeira raiz:.%2f\n", x1);
      printf("segunda raiz:.%2f\n", x2);

    }
    
   

      
    
    
}
