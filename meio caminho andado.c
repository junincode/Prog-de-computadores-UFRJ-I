/*
Autor: <nome do aluno>
Data: <data de hoje>
Descrição: <o que o programa faz>
Entrada: <o que o programa espera receber como entrada>
Saída: <o que o programa retorna para o usuário>
Defesa: possíveis restrições de entrada
*/

#include <stdio.h>

int main() {
	char str[3];
	int C, D, U, num;
	
	printf("Digite um número de 3 algarismos: ");
	scanf("%s%*c", &str);
	num = strtol(str, NULL, 10);
	C = str[0];
	D = str[1];
	U = str[2];
	if ((C**3 + D**3 + U**3) == num) {
		printf("A propriedade é valida para o número %d ", num);
	else {
		printf("A propriedade não é válida para o número %d ", num);
}
}}
	
	
}