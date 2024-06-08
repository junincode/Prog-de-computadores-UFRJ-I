#include <stdio.h>

/*  A lógica por trás do código não foi inteiramente desenvolvida por mim. Porém, o script abaixo
    funciona perfeitamente para ordenar uma lista que seja um "merge" de duas listas já ordenadas (assumidas).*/
int main(void){
    
    int n1=0, n2=0, cn1=0, cn2=0, i=0;
    
    printf("Tamanho de l1[] e l2[] : ");
    scanf("%d %d", &n1, &n2);
    
    int l1[n1], l2[n2], lordem[n1 + n2];
    
    for (int i = 0; i < n1; i++){
        printf("l[%d] : ", i);
        scanf("%d", &l1[i]);
    }
    
    for (int i = 0; i < n2; i++){
        printf("l[%d] : ", i);
        scanf("%d", &l2[i]);
    }
    
    while (i < n1 + n2) {
        if (cn1 < n1 && (cn2 >= n2 || l1[cn1] <= l2[cn2])) {
            lordem[i] = l1[cn1];
            printf("Escolhi %d\n", l1[cn1]);
            cn1 += 1;
        } else if (cn2 < n2 && (cn1 >= n1 || l1[cn1] > l2[cn2])) {
            lordem[i] = l2[cn2];
            printf("Escolhi %d\n", l2[cn2]);
            cn2 += 1;
        }
        i += 1;
    }
    printf("Lista: ");
    for(int i = 0; i < n1+n2; i++){
        printf("%d ", lordem[i]);
    }
    return 0;
}
