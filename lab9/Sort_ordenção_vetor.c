#include <stdio.h>

int main()
{
    int d, s;
    printf("Tamanho da lista : ");
    scanf("%d", &d);
    int l[d];
    for(int i = 0; i < d; i++){
        printf("l[%d] : ", i);
        scanf("%d", &l[i]);
    }
    for (int i = 0; i <= d-2; i++){
        if (l[i] > l[i+1]){
            s = l[i];
            l[i] = l[i+1];
            l[i+1] = s;
            /*for(int m = 0; m < d; m++){ // mostra a lista com as mudanças em andamento.
                    printf("%d ", l[m]);
                }*/
        }
        for(int c = i; c > 0; c--){
             if (l[c-1] > l[c]){
                s = l[c];
                l[c] = l[c-1];
                l[c-1] = s;  
                /*for(int m = 0; m < d; m++){ // mostra a lista com as mudanças em andamento.
                    printf("%d ", l[m]);
                }*/
            }
    }
    }
    for (int i = 0; i < d; i++){
        printf("%d ", l[i]);
    }
    
    return 0;
}
