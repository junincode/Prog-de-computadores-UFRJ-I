/*
Autor: Moises Auad Werneck
Data: 10/04/2024
Descrição: retorna valores a depender dos valores de entrada
Entrada: inteiros, racionais e char's
Saída: prints
Defesa: Restrições explicitadas no momento da requisição de dados.
*/
#include <stdio.h>
#include <ctype.h>

int main(){
    const char *str;
    int  e;
    int x;
    float y;
    float a, b, c;
    float n1, n2, n3;
    char d;
    printf("===== Menu =====\n");
    printf("[1] Par ou Ímpar\n");
    printf("[2] Positivo ou Negativo.\n");
    printf("[3] Maior de 3\n");
    printf("[4] Média dos 2 maiores de 3 fornecidos.\n");
    printf("[5] Letra maiúscula ou minúscula.\n");
    printf("[6] Sair\n");
    printf("================\n");
    printf("Sua escolha: ");
    scanf("%d", &e);
    switch (e) {
        case 1:
            printf("Retornará -1 se for PAR e 1 ser for ÍMPAR\n");
            printf("Digite um número inteiro:");
            scanf("%d", &x);
            (x%2==0) ? printf("-1") : printf("1");
            break;
        case 2:
            printf("\nRetornará 1 ser por POSITIVO e -1 CASO CONTRÁRIO.\n");
            printf("Digite um número racional qualquer: ");
            scanf("%f", &y);
            (y > 0) ? printf("1") : printf("-1");
            break;
        case 3:
            printf("\nRetornará o maior número dos 3 digitados.\n");
            printf("Digite 3 números racionais: ");
            scanf(" %f %f %f", &a, &b, &c);
            (a > b && a > c) ? printf("O maior número é %.2f", a) : (b > c) ? printf("O maior número é %.2f", b) : printf("O maior número é %.2f", c);
            break;
        case 4:
            printf("\nRetornará a média dos 2 maiores números de 3 fornecidos.\n");
            printf("Digite 3 números racionais: ");
            scanf("%f %f %f", &n1, &n2, &n3);
            (n1 < n2 && n1 < n3) ? printf("A média entre %f e %f é %.2f", n2, n3, (n2+n3)/2) : (b < c) ? printf("A média entre %f e %f é %.2f", n1, n3, ((n1 + n3)/2)) : printf("A média entre %f e %f é %.2f", n1, n2, (n2 + n2)/2);
            break;        
        case 5:    
            printf("\nRetornará m se for minúsculo, M se for maiúsculo e ? se for qualquer dígito.");
            printf("\nDigite um caractere qualquer: ");
            scanf("%c ", &str);
            if(str >= "A" && str <= "Z" ) {
                printf("O caractere %c é maiúsculo.", d);
            }
            else if (str >= "A" && str <= "Z") {
                printf("O caractere %c é minúsculo.", d);
            }
            else {
                printf("O caractere é qualquer outro, menos letra.");
            }
            break;
        case 6:
            printf("Saindo...");
            break;
        default:
            printf("Escolha inválida.");
    return 0;
}
    printf("\nFim.");
}