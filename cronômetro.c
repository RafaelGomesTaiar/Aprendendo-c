


#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	int hora, segundo, minuto, d, bom; 
	
	printf("insira o tempo registrado em segundos:\n");
    scanf("%d", &segundo);
    
    hora = segundo / 3600;
	segundo = segundo - (3600*hora);
		
    minuto = segundo / 60;
    segundo = segundo - (60*minuto);
    
	printf("Horas: %d.\n", hora);	
	printf("Minutos: %d.\n", minuto);
	
	printf("Segundos: %d.\n", segundo);
	
	printf("Parabens!\n");
	
	d = 3;
	bom = 3;
	
	printf("Digite um numero entre 0 e 10 e digo se foi bom ou nao!\n");
	scanf("%d", &d);
	
	if (d == bom) {
		printf("foi bom!\n");
	}else {
		printf("Nao foi bom.\n");
	}

	system("pause");
	
		
	return 0;
	
}
