/*
Autor: Moises A. Werneck
Data: 06/04/24
Descrição: Verifica se a propriedade CDU = C³ + D³ + U³ se aplica a um número
Entrada: um número inteiro de 3 dígitos.
Saída: null
Defesa: deve ser um valor inteiro entre 100 e 999
*/

#include <stdio.h>
int main() {
    int num, num3, C, D, U;
    printf("Digite um número inteiro entre 100 e 999: ");
    scanf("%d", &num);
    if (num <= 99 || num >= 1000) {
        printf("\nO número inserido é inválido.");
    }
    C = num / 100;
    D = (num%100)/10;
    U = (num%100)%10;
    num3 = C*C*C + D*D*D + U*U*U;
    if (num == num3) {
            printf("\nA propriedade C³ + D³ + U³ = CDU é válida: ");
            printf("\n%d + %d + %d = %d", C*C*C, D*D*D, U*U*U, num);
                }
    else {
        printf("\nA propriedade C³ + D³ + U³ = CDU é inválida: ");
        printf("\nInválido: %d + %d + %d = %d, CDU = %d", C*C*C, D*D*D, U*U*U, num3, num);
    }
//corpo do programa
return 0;
}
