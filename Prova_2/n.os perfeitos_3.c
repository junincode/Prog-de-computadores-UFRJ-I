#include <stdio.h>

int main(void);

int eh_perfeito(int);

int main(void){
    int n;
    printf("Digite S inteiro positivo: ");
    scanf("%d", &n);
    if (n <= 1){
        printf("Erro.");
        return 1;
    }
    for (int i = 2; i <= n; i++){
        if(eh_perfeito(i)){
            printf("%d ", i);
        }
    }
    return 0;
}

int eh_perfeito(int n){
    int tot = 0;
    for(int i = n-1; i >= 1; i--){
        if(n%i == 0){
            tot += i;
        }
    }
    return tot == n;
}