/*
Autor: Moises Auad Werneck
Data: 12/04/2024
Descrição: realiza uma das 4 operações aritmeticas básicas.
Entrada: 2 números e um char.
Saída: um float ou um print
Defesa: operador válido.
*/
#include<stdio.h>

int main() {
float a, b;
char operador;
printf("Digite uma operacao aritmetica entre dois numeros a e b, no formato /a <operacao> b/: \n");
scanf("%f %c %f", &a, &operador, &b);
switch (operador) {

case '+':
printf("%.2f\n", a + b);
break;
case '-':
printf("%.2f\n", a - b);
break;
case '/':
printf("%.2f\n", a / b);
break;
case '*':
printf("%.2f\n", a * b);
break;
default:
puts("Operador nao definido.");
}
return 0;
}
