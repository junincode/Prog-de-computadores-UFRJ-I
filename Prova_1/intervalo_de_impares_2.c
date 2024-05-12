#include <stdio.h>

int main(void);
void impares(int, int);

void impares(int n1, int n2){
    int maior, menor;
    if (n1 > n2){
         menor = n2;
         maior = n1;
    }
    else{
         menor = n1;
         maior = n2;
    }
    for(menor; menor <= maior; menor++){
        if (menor%2==1){
            printf("%d ", menor);
        }
    }

}
int main(void){
    int n1, n2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);
    if (n1 == n2){
        printf("Nao ha intervalo.");
        return 1;
    }
    impares(n1, n2);
    return 0;
}