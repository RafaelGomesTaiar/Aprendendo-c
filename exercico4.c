 /*(Adaptado de ASCENCIO e CAMPOS, 2008) Fa�a um programa que receba o sal�rio de 
um funcion�rio, calcule e mostre o novo sal�rio, sabendo-se que este sofreu um 
aumento de 25%.*/ 

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int salario, novosalario;
	
	printf("digite seu salario:\n");
	scanf("%d", &salario);
	
	novosalario = salario + salario*(1.0/4.0); 
	
	printf("seu novo salario sera:%d\n", novosalario);
	return 0;
}
