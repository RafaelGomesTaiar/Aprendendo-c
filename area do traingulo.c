 /*Fa�a um programa que calcule e mostre a �rea de um tri�ngulo. Sabe-se que: �rea = (base * altura)/2.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float base, altura, area;
	
	printf("insira o valor da base:\n");
	scanf("%f", &base);
	printf("insira o valor da altura:\n");
	scanf("%f", &altura);
	
	area = base*altura/2;
	
	printf("a area do triangulo sera:%f\n", area);
	return 0;
}
