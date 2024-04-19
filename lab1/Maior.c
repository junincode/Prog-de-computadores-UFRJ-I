/*
Descrição: dados três números inteiros, retorna o maior
Entrada: os três números inteiros
Saída: o maior número encontrado
Defesa: não se aplica (não há restrições de entrada)
*/

#include<stdio.h>

int main() {
	//dicionário de dados
	int a, b, c;
	int maior;
	
	//obtém os três números
	printf("Digite os três números separados por espaço: /n");
	scanf("%d %d %d", &a, &b, &c);
	
	//encontra o maior número
	if (a > b && a > c) {
		maior = a;
	}
	else if (b > c) {
		maior = b;
	}
	else {
		maior = c;
	}
	printf("O Maior número é: %d \n", maior);
	return 0;
} //FIM
