/*(Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba três notas de 
um aluno, calcule e mostre a média aritmética e a mensagem que segue a tabela abaixo. 
Para alunos de exame, calcule e mostre a nota que deverá ser tirada no exame para 
aprovação, considerando que a média no exame é 6,0. */

#include <stdio.h>
#include <stdio.h>
 int main() {

    float nota_1, nota_2, nota_3, media, exame;

       printf("digite sua primeira nota:\n");
       scanf("%f", &nota_1);
       printf("digite sua segunda nota:\n");
       scanf("%f", &nota_2);
       printf("digite sua terceira nota:\n");
       scanf("%f", &nota_3);
    
    media = (nota_1 + nota_2 + nota_3)/3;
       printf("sua media foi:%.2f\n", media);

    if ((media >= 7.0) && (media <= 10.0))
    {
       printf("Aprovado!");
    }
    if ((media >= 3.0) && (media < 7.0))
    {
       printf("Exame!\n");
       exame = 12.0 - media;
       printf("A nota que voce deverar tirar no exame e:%.2f\n", exame);
    }
    if ((media >= 0.0) && (media < 3.0))
    {
       printf("Reprovado!");
    }


 }