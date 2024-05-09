#include <stdio.h>

int main(void);
void tabuada(int);

void tabuada (int n){
    printf("======================");
    for (int i = 1; i < 11; i++){
        printf("%d X %d = %d\n", n, i, n*i);
    }
    printf("======================");
}
int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    tabuada(n);
    return 0;
}