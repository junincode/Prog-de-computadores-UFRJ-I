/*
Autor: Moises A. Werneck
Data: 03/04/2024
Descrição: Calcula a média entre os 2 maiores números de 3 fornecidos.
Entrada: 3 valores float
Saída: um valor float
Defesa: ""
*/

#include <stdio.h>

int main() {
    double media;
    float n1, n2, n3,  menor;
    int c;
    printf("Digite as 3 notas do aluno: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    if (n1 <= n2 && n1 <= n3) {
        printf("A menor nota é %.2f", n1);
        media = (n2+n3)/2;
            }
    else if (n2 <= n1 && n2 <= n3){
        printf("A menor nota é %.2f", n2);
        media = (n1 + n3)/2;
    }
    else if (n3 <= n1 && n3 <= n2){
        printf("A menor nota é %.2f", n3);   
        media = (n1+n2)/2;
    }
    printf("\n%.2f %.2f %.2f", n1, n2, n3);
    printf("\nA média entre os dois maiores número é %.2f", media);
    return 0;
}
