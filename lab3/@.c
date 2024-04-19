*
Autor: Moises Auad Werneck
Data: 10/04/2024
Descrição: Diz qual símbolo gráfico foi inserido.
Entrada: um char
Saída: um print
Defesa: <restrições sobre os dados de entrada, se
existirem>
Comentário: O programa exibia 2 mensagens quando a entrada era um "@" pois não havia
o comando break abaixo do "case @" e, portanto, todas os casos abaixo eram executados 
juntos.
*/
#include <stdio.h>
int main() {
char simbolo;
printf("Digite um caractere.\n");
scanf ("%c", &simbolo);
switch(simbolo) {
case '!':
printf("Exclamacao.\n");
break;
case '?':
printf("Interrogacao.\n");
break;
case '@':
printf("O proximo simbolo eh %c.\n", simbolo + 1);
break;
default:
printf("Simbolo qualquer.\n");
}
return 0;
}