#include <stdio.h>

int main(void);

int main() {
    int n, a, ne;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        for (int l = i; l < n; l++){
            printf(" ");
        }
        for(int c = 0; c < 1+(2*i); c++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}