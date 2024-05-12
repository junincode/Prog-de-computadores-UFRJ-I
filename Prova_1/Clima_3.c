#include <stdio.h>

int main(void);

void clima(float, float, float);

void clima(float a, float b, float c){
    float M, d;
    if (a >= b && a >= c){
        M = a;
        d = M - (b+c)/2;
    }
    else if(b >= c){
        M = b;
        d = M - (a+c)/2;
    }
    else {
        M = c;
        d = M - (b+a)/2;
    }

    if (d <= 10 && M > 25){
        printf("Equatorial");
    }
    else if (d <= 10 && M < -10) {
        printf("Polar");
    }
    else if (d <= 40 && M > 25){
        printf("Temperado");
    }
    else{
        printf("Continental");
    }
}

int main(void){
    float a, b, c;
    printf("Digite as 3 temperaturas: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("O clima dessa regiao aparenta ser ");
    clima(a, b, c);
    return 0;
}