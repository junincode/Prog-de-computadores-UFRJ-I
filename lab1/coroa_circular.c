/*
Algoritmo: Calcular a área de uma coroa circular (anel) formada por dois círculos de raios r1 e r2. Considere Pi = 3.14
Entrada: raio do círculo menor e raio do círculo maior.
Saída: Área da coroa circular.
Defesa: Nenhum dos raios pode valer 0.
*/

#include<stdio.h>

int main() {
    //Dicionário de variáveis
    float r1, r2, pi, coroa;

    pi = 3.14;
    
    printf("Digite o valor do raio do primeiro círculo: ");
    scanf(" %f", &r1);
    
    if (r1 <= 0) {
        printf("O valor do raio deve ser maior que 0");
}
    else {
        printf("Digite o valor do raio do segundo círculo: ");  
        scanf("%f", &r2);

        if (r2 <= 0) {
        printf("O valor do raio deve ser maior que 0");
}

        else {
            if (r1 > r2) {
                coroa = r1*r1*pi - r2*r2*pi;
                printf("A coroa circular tem valor de %.2f", coroa);
}
            else if (r2 > r1) {
                coroa = r2*r2*pi - r1*r1*pi;
                printf("A coroa circular tem valor de %.2f", coroa);
}
            else {
                printf("Não há coroa com círculos de mesmo raio.");
}
}
}
}
