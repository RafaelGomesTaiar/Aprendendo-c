#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int n1, n2, n3, n4, soma;
	
	printf("escreva quatro numeros em sequencia\n");
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	scanf("%d", &n4);
	
	soma= n1 + n2 + n3 + n4;
	printf("resultado total: %d.", soma);
	return 0;
}
