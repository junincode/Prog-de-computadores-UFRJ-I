#include <stdio.h>


float p_i(int n);

float p_i(int n){
float s = 0;
for(int i = 0; i < n; i++){
        float v[n], w[n];
        printf("Digite o valor de v%d / w%d : ", i, i);
        scanf("%f %f", &v[i], &w[i]);
        s += v[i] * w[i];
    }
    return s;
}
int main(){
    int n;
    printf("Digite o tamanho da lista : ");
    scanf("%d", &n);
    if (!(0 <= n && n <= 10)){
        printf("Erro.");
        return 1;
    }
    printf("%.3f\n", p_i(n));

    return 0;
}
