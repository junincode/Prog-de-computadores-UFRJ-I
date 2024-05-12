#include <stdio.h>

int main(void);
int piso(float);
int teto(float);
int a_b(float, float);

int piso(float n){
    return (int)n;
}

int teto(float n){
    return (int)n + 1;
}

int a_b(float a, float b){
    if ((piso(a) + piso(b))/2.0 == piso((a + b)/2.0)){
        return 1;
    }
    else
        return 0;
} 

int main(void){
    float a, b;
    printf("Digite <a> e <b>: ");
    scanf("%f %f", &a, &b);
    printf("%d", a_b(a, b));
}