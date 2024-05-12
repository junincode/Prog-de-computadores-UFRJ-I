#include <stdio.h>

int main(void);
void avalia(float, int, float, int, float, int);

void avalia(float u, int pu, float p, int pp, float a, int pa){
    float maior = 0;
    if (u > p && u > a){
            maior = u;
        }
        else if(p > a){
            maior = p;
        }
        else{
        maior = a;
        }
    if ((u * pu > a * pa) && (u * pu > p * pp) && (u > 0)){
        printf("Seguro\n");
    }
    else if((p * pp > a * pa) && (p * pp > u * pu)){
        printf("Moderado\n");
    }
    if (maior < 0){
        printf("Falencia\n");
        }
    }

int main(void){
    float u, p, a; 
    int pu, pp, pa; 
    printf("Digite o lucro dos meses na ordem (ultimo, penultimo, antepenultimo): ");
    scanf("%f %f %f", &u, &p, &a);
    printf("Digite os pesos dos meses na ordem (ultimo, penultimo, antepenultimo): ");
    scanf("%d %d %d", &pu, &pp, &pa);
    if (pa < 1){
        printf("Erro de pesagem minima para o antepenultimo.");
        return 1;
    }
    avalia(u, pu, p, pp, a, pa);
    return 0;
}