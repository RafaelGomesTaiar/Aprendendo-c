/*(Adaptado de ASCENCIO e CAMPOS, 2008) Sabe-se que o quilowatt de energia custa um 
milésimo do salário mínimo. Faça um procedimento que receba o valor do salário 
mínimo e quantidade de quilowatts consumida por uma residência. O procedimento 
deve calcular e retornar através de passagem de parâmetros por referência: 
a) o valor, em reais, de cada quilowatt; 
b) o valor, em reais, a ser pago por essa residência; 
c) o valor, em reais, a ser pago com desconto de 15%.*/

#include <stdio.h>
#include <stdlib.h>

main(){
    float sal_minimo, quan_watts, v_qwatts, v_serpago, v_15desc;

    printf("digite o valor do salario minimo:\n");
    scanf("%f", &sal_minimo);
    printf("agora digite a quantidade de quilowatts consumida por uma residencia:\n");
    scanf("%f", &quan_watts);


    v_qwatts = sal_minimo/1000.0;
    printf("o valor de cada quilo watts seria: %.2f. \n", v_qwatts);
    v_serpago = v_qwatts*quan_watts;
    printf("o valor a ser pago por essa residencia: %.2f. \n", v_serpago);
    v_15desc = v_serpago - v_serpago*15/100.0;
    printf("o valor a seer pago com desconto de 15 por cento: %.2f. \n", v_15desc);



system("pause");
}