#include <stdio.h>

int main(void);

void arvore(int, int);

void arvore(int l, int invertida){
    if (invertida) {
        for (int i = l; i > 0; i--){
            for (int a = i; a < l; a++){
                printf(" ");
            }
            for (int c = 0; c < (2*(i-1))+1; c++){
                printf("*");
            }
            printf("\n");
        }
    }
    else 
    for (int i = 0; i < l; i++){
        for (int a = i; a < l; a++){
            printf(" ");
        }
            for (int c = 0; c < (2*i)+1; c++) {
                printf("*");
            }
            printf("\n");
    }
    printf("\n");
}

int main() {
    int n, in;
    printf("Digite o n.o de linhas e invertida [0-nao/1-sim]: ");
    scanf("%d %d", &n, &in);
    arvore(n, in);
    return 0;
}