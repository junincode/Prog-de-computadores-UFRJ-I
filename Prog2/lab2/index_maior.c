#include <stdio.h>

int index_maior(int tam, int vector[]);

int index_maior(int tam, int vector[]){
    int maior = *(vector);
    int i_maior = 0;
    for(int i = 1; i < tam; i++){
        if (*(vector + i) > maior){
            maior = *(vector + i);
            i_maior = i;
        }        
    }
    return i_maior;
}
int main()
{
    int tam;
    printf("Defina o tamanho do arr: ");
    scanf("%d", &tam);
    int vector[tam];
    for(int i = 0; i < tam; i++){
        scanf("%d", vector + i);
    }
    printf("O indice do maior valor digitado foi %d", index_maior(tam, vector));
    return 0;
}
