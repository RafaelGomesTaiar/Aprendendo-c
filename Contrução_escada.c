/*(Adaptado de ASCENCIO e CAMPOS, 2008) Cada degrau de uma escada tem X cm de 
altura. Faça uma função que receba essa altura, em centímetros, e a altura que o usuário 
deseja alcançar ao subir a escada, em metros. A função deve retornar o número de 
degraus necessários para se atingir a altura desejada (desprezando a altura do próprio 
usuário). Em seguida, crie um algoritmo para que o usuário possa informar os dados de 
entrada da função e, ao final, calcule e mostre o número de degraus.*/

#include <stdio.h>
#include <stdlib.h>

int main (){

    float alt_degrau, alt_escada, nec_degrau;


    printf("me fale qual a altura do degrau da escada(centimetros):\n");
    scanf("%f", &alt_degrau);
    printf("me fale qual a altura que vc deseja alcancar ao subir a escada(metros):\n");
    scanf("%f", &alt_escada);
    
    nec_degrau = alt_escada*100.0/alt_degrau;
    printf("o numero de degraus necessarios para a altura desejada=%.2f.\n", nec_degrau);


}