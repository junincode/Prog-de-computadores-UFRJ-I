/*
Autor: Moises Auad Werneck
Data: 19/04/2024
Descrição: imprime linhas de * conforme pedido
Entrada: um inteiro.
Saída: prints
Defesa: O número deve ser inteiro.
*/
#include <stdio.h>
int main() {
    int l, c=1, i=0;
    printf("Digite o número que linhas de deseja ver: ");
    scanf("%d", &l);
    while (c <= l) {
        i = 1;
        while (i <= c) {
            printf("*");
            i += 1;
        };
        printf("\n");
        c += 1;
};
return 0;
}