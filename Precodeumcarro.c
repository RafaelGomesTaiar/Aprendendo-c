/*(Adaptado de ASCENCIO e CAMPOS, 2008) O custo de um carro novo ao consumidor 
final � o pre�o de f�brica somado ao percentual de lucro do distribuidor, acrescido dos 
impostos aplicados ao pre�o de f�brica. Fa�a um programa que receba o pre�o de 
f�brica de um ve�culo, o percentual de lucro do distribuidor e o percentual de impostos. 
Em cada item, crie uma fun��o distinta para calcular e retornar:a) o valor correspondente ao lucro do distribuidor; 
b) o valor correspondente aos impostos; 
c) o pre�o final do ve�culo. */

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float precofabrica, percentuallucro, percentualimpostos, lucrodistribuidor,  valorimpostos, precofinal;
	
	printf("digite o valor do pre�o de fabrica:\n");
	scanf("%f", &precofabrica);
	printf("agora a pocentagem de lucro do distribuidor:\n");
	scanf("%f", &percentuallucro);
	printf("para finalizar, o percentual de impostos:\n");
	scanf("%f", &percentualimpostos);
	
	lucrodistribuidor = precofabrica*percentuallucro/100;
	printf("A)o valor correspondente ao lucro do distribuidor foi:%.2f.\n", lucrodistribuidor);
	
	valorimpostos = precofabrica*percentualimpostos/100;
	printf("B)a valor correspondente aos impostos foi:%.2f.\n", valorimpostos);
	
	precofinal = precofabrica + lucrodistribuidor + valorimpostos;
	printf("C)o preco final do veiculo foi :%.2f.\n", precofinal);
	
	system("pause");
	return 0;
}
