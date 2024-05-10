#include <stdio.h>

int main(void);
int e_multiplo(int, int);

int e_multiplo(int D, int d){
    if (D%d==0) {
        return 1;
    }
    return 0;
}

int main(){
    int n, a, b, total = 0, i = 1;
    printf("Digite <n> <a> <b>: ");
    scanf("%d %d %d", &n, &a, &b);
    printf("Os %d primeiro n.os naturais multiplos de %d e %d\n", n, a, b);
    while (total < n){
        if (e_multiplo(i, a) && (e_multiplo(i, b))) {
            printf("%d ", i);
            total += 1;
        }
        i += 1;
    }
    return 0;
}