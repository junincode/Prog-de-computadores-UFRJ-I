/*
Autor: Moises Auad Werneck
Data: 10/04/2024
Descrição: Compara a média de duas notas com uma constante (5)
Entrada: 2 valores float
Saída: um print
Defesa: devem ser número no máximo float
*/
#include <stdio.h>
int main() {
    float n1, n2;
    printf("1° nota: ");
    scanf("%f", &n1);
    printf("2° nota: ");
    scanf("%f", &n2);
    const int media = 5;
    printf("Com média %.2f\n", (n1+n2)/2);
    if (((n1 + n2)/2) >= media) {
        printf("Aprovado!");
    }
    else {
        printf("Reprovado!");
    }
//corpo do programa
return 0;
}