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
    if (l > 0) {
    while (c <= l) {
        i = 1;
        while (i <= c) {
            printf("*");
            i += 1;
        };
        printf("\n");
        c += 1;
};
}
    else if (l < 0) {
    c = l;
    while (c <= -1) {
        i = c;
        while (i <= -1) {
            printf("*");
            i += 1;
        };
        printf("\n");
        c += 1;  
    };
    }
    else {
        printf("Valor inválido.");
    }
return 0;
}