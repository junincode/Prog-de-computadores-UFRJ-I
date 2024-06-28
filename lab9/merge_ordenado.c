#include <stdio.h>

int main(void)
{
    int n;
    printf("Digite um n.o : ");
    scanf("%d", &n);
    int v[n];
    for(int i = 0; i < n; i++){
        printf("Digite o valor da posição v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    for(int i = 0; i < n; i++){
        for(int k = 0; k < n - i - 1; k++){
            if(v[k] > v[k+1]){
                 v[k] ^= v[k+1];
                 v[k+1] ^= v[k];
                 v[k] ^= v[k+1];
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    return 0;
}
