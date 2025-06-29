#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char s[10];
	
	printf("digite algo(scanf tardicinal):\n");
	scanf("%s", s);
	fflush(stdin);
	
	printf("resulado: %s\n\n", s);
	
	printf("digite algo(scanf rebuscado)\n");
	scanf("%9[^\n]s", s);
	fflush(stdin);
	
	printf("resultado: %s\n\n", s);
	
	
	return 0;
}
