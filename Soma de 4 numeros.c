#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1, n2, n3, n4, soma;
	
	printf("escreva quatro numeros em sequencia\n");
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	scanf("%d", &n4);
	
	soma= n1 + n2 + n3 + n4;
	printf("resultado total seu burro: %d.", soma);
	return 0;
}
