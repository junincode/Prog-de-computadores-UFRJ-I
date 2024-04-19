/* 
Descrição: Resolver a equação de primeiro grau ax+b=0
Entrada: Coeficientes reais a e b da equação ax + b = 0
Saída: Resultado da equação (valor de x)
Defesa: coeficiente angular não-nulo (i.e devemos impedir a == 0)
*/

#include<stdio.h>

int main() {
	//Dicionário de dados
	float a, b, x;
	
	//obtém os três números
	printf("Digite o valor de [a]: ");
	scanf(" %f", &a);
	if (a == 0){
		printf("O valor de [a] não pode ser 0");
	}
	else {
	printf("Digite o valor de [b]: ");
	scanf(" %f", &b);
	x = -b/a;
	printf("A partir da equação %.2fx + %.2f = 0 \n", a, b);
	printf("Concluímos que x vale %.2f \n", x);
	}
} //FIM

	
