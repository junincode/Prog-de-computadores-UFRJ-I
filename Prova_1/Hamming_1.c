#include <stdio.h>
#include <math.h>

int main(void);
int numdig(int);
int hamming(int, int);

int numdig(int n){
    int tot = 0;
    while (n != 0){
        n /= 10;
        tot += 1;
    }
    return tot;
}

int hamming(int n1, int n2){
    int i = numdig(n1) - 1, tot = 0;
    for(i; i <= 0; i--){
        if ((n1 % (int)pow(10, i)) == (n2 % (int)pow(10, i)) && (i != 0)) {
            tot += 1;
        }
        else if (i == 0){
            if ((n1 % 10) == (n2 % 10)){
                tot += 1;
                return tot;
            }
        }
        n1 /= 10;
        n2 /= 10;
    }
    return tot;
}
int main() {
    int n1, n2;
    printf("Digite dois numeros com quantidade igual de algarismos: ");
    scanf("%d %d", &n1, &n2);
    if (numdig(n1) == numdig(n2)){
        printf("O hamming entre %d e %d eh %d", n1, n2, hamming(n1, n2));
    }
    else {
        printf("Erro.");
        return 1;
    }
    return 0;
}