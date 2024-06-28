/*
Autor: Moises Auad Werneck
Data: 16/06/24
Descrição: faz um mapa de campo minado em uma lista
Entrada: uma sequência de valores 0/1
Saída: um lista correspondente ao campo minado inserido
Defesa: devem ser apenas 0 e 1
*/

#include <stdio.h>
int main() {
    int n;
    printf("Tamanho do tabuleiro: ");
    scanf("%d", &n);
    int v[n], campo[n];
    for(int i = 0; i < n; i++){
        printf("Posicao[%i] : ", i);
        scanf("%d", &v[i]);
        if(v[i] != 0 && v[i] != 1){
            printf("Erro.");
            return 1;
        }
        campo[i] = 0;
    }
    for(int i = 0; i < n; i++){
        if(v[i] == 1){
            campo[i]++;
            campo[i-1]++;
            campo[i+1]++;
        }
    }
    for(int i = 0; i < n; i++){
        printf("[ %d ] ", campo[i]);
    }
return 0;
}