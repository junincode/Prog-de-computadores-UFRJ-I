/*
Autor: Moises A. Werneck
Data: 06/04/24
Descrição: Verifica em qual quadrante ou eixo o ponto descrito está no plano cartesiano.
Entrada: dois números inteiros.
Saída: null
Defesa: apenas valores float
*/
#include <stdio.h>
int main() {
    int x, y;
    printf("Digite os valores das coordenadas uma ao lado da outra X Y: ");
    scanf("%d %d", &x, &y);
    if (x == 0 && y == 0) {
        printf("\nO ponto [%d,%d] se encontra no ponto central.", x, y);
    }
    else if (x == 0) {
        printf("\nO ponto [%d,%d] se encontra no eixo Y.", x, y);
    }
    else if (y == 0) {
        printf("\nO ponto [%d,%d] se encontra no eixo X.", x, y);
    }
    else if (x > 0 && y > 0) {
        printf("\nO ponto [%d,%d] se encontra no 1° Quadrante.", x, y);
        }
    else if (x > 0 && y < 0) {
        printf("\nO ponto [%d,%d] se encontra no 4° Quadrante", x, y);
    }
    else if (x < 0 && y > 0) {
        printf("\nO ponto [%d,%d] se encontra no 2° Quadrante", x, y);
            }
    else {
        printf("\nO ponto [%d,%d] se encontra no 3° Quadrante", x, y);
    }
//dicionário de dados
//corpo do programa
return 0;
}