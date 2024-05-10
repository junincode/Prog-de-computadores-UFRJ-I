#include <stdio.h>
#include <math.h>

int main(void);

void sqrtN(double);

void sqrtN(double n){
    double i = n/2;
    double prox;
    printf("%.2lf\n", i);
    while (1) {
        prox = i - (((pow(i, 2) - n))/(2*i));
        printf("%.30lf\n", prox);
        if ((fabs(prox-i) < pow(10, -6))) {
            break;
        }
        i = prox;
    }
    printf("FINAL: %.30lf\n", prox);
}

int main(void) {
    double n;
    printf("Digite um numero: ");
    scanf("%lf", &n);
    printf("Numero lido: %.2lf\n", n);
    sqrtN(n);
    printf("Raiz quadrada: %.2lf", sqrt(n));
    return 0;
}