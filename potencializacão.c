
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	float n, qua, cu, raizq, raizc;
	
	printf("digite um numero!\n");
	scanf("%f", &n);
	
	
	qua = pow(n, 2);
	cu = pow(n, 3);
	raizq = pow(n, 1.0/2.0);
	raizc = pow(n, 1.0/3.0);
	
	printf("quadrado do numero:%f\n",qua);                                                                                                                                                                                                                                                                                                                                                                    
	printf("cubo do numero:%f\n",cu);   
	printf("raiz quadrada:%f\n",raizq);   
    printf("raiz cubica:%f\n",raizc);   
	
	
	
	
	return 0;
}
