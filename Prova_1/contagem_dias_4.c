#include <stdio.h>

int main(){
    int a1, a2, m1, m2, d1, d2, tot1, tot2;
    printf("Digite anos/meses/dias da 1a pessoa: ");
    scanf("%d %d %d", &a1, &m1, &d1);
    printf("Digite anos/meses/dias da 2a pessoa: ");
    scanf("%d %d %d", &a2, &m2, &d2);

    if (a1 > 100 || a2 > 100 || m1 > 11 || m2 > 11 || d1 > 29 || d2 > 29){

        printf("Dados invalidos.");
        return 1;
    }
    tot1 = (a1*365) + (m1*30) + d1;
    tot2 = (a2*365) + (m2*30) + d2;

    if (tot1 > tot2) {
        if (tot1 - tot2 > tot2){
            printf("verdadeiro");
        }
        else{
            printf("falso");
        }    
    }
    else if(tot2 > tot1){
        if(tot2 - tot1 > tot1){
            printf("verdadeiro");
        }
        else{
            printf("falso");
        }
    }
    else{
        printf("falso");
    }
    return 0;
}