#include <stdio.h>

int main(void);
int tabuleiro(int, int, int);

int tabuleiro(int pi, int x, int y){
    return (x || y) + (((pi - 1) + x + y) % 40);
    }

int main(void){
    int pi, x, y;
    printf("Informe sua posicao no jogo [1-40]: ");
    scanf("%d", &pi);
    printf("Informe o resultado de seus dados: ");
    scanf("%d %d", &x, &y);
    printf("Sua nova posicao eh %d", tabuleiro(pi, x, y));
    return 0;
}