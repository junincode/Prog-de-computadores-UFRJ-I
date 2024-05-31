#include <stdio.h>
#include "poli.h"


int main(void){
    int o;
    printf("[1] Soma\n");
    printf("[2] Derivada\n");
    printf("[3] Solucao\n");
    printf("[4] Calcular para determinado x\n");
    printf("[5] Sair\n");
    scanf("%d", &o);
    polinomio p1, p2, p3;
    int x;
    switch(o){
        case 1:
            printf("Digite os coeficientes de poli_1: ");
            scanf("%f %f %f %f", &p1.c3, &p1.c2, &p1.c1, &p1.c0);
            printf("Digite os coeficientes de poli_2: ");
            scanf("%f %f %f %f", &p2.c3, &p2.c2, &p2.c1, &p2.c0);
            p3 = somarPoli(p1, p2);
            printf("%.2fx3 + %.2fx2 + %.2fx + %.2f", p3.c3, p3.c2, p3.c1, p3.c0);
            break;
        case 2:
            printf("Digite os coeficientes de poli_1: ");
            scanf("%f %f %f %f", &p1.c3, &p1.c2, &p1.c1, &p1.c0);
            p2 = derivadaPoli(p1);
            printf("%.2fx2 + %.2fx + %.2f", p2.c2, p2.c1, p2.c0);
            break;
        case 3:
            printf("Digite os coeficientes da poli_1: ");
            scanf("%f %f %f %f", &p1.c3, &p1.c2, &p1.c1, &p1.c0);
            if (p1.c3 != 0) {
                printf("O polinômio deve ser de 2o grau.");
                break;
            }
            else
            printf("As raízes do polinômio acima são: %.2f e %.2f", raizesPoli(p1).x1, raizesPoli(p1).x2);
            break;
        case 4:
            printf("Digite os coeficiente da poli_1: ");
            scanf("%f %f %f %f", &p1.c3, &p1.c2, &p1.c1, &p1.c0);
            printf("Qual o valor de x?");
            scanf("%d", &x);
            printf("O valor de %.2fx3 + %.2fx2 + %.2fx + %.2f com x = %d é %.2f", p1.c3, p1.c2, p1.c1, p1.c0, x, valorPoli(p1, x));
            break;
        case 5:
            printf("Saindo...");
    }
}

