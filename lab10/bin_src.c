/*
Autor: Moises Auad Werneck
Data: 16/06/24
Descrição: 
Entrada: Faz busca binária em listas com tipos de dados diferentes
Saída: O index dos dados buscados
Defesa: valores de peso e idade assumidos corretos
*/
#include <stdio.h>
typedef struct {
    float peso;
    int idade;
}  pessoa;

// Função que executa uma busca binária na lista de pessoas com base no peso
int peso(pessoa v[], float peso){
    int esq = 0, dir = 4, meio;
    while(esq != dir){
        meio = (dir + esq)/2;
    if(peso > v[meio].peso){
        esq = meio+1;
    }
    else{
        dir = meio;
    }
    }
    return peso == v[esq].peso ? esq : -1;
}

// Análoga à de cima, porém com base na idade
int idade(pessoa v[], int idade){
    int esq = 0, dir = 4, meio;
    while(esq != dir){
        meio = (esq+dir)/2;
        if(idade >= v[meio].idade){
            dir = meio;
        }
        else
            esq = meio+1;
    }
    return idade = v[esq].idade ? esq : -1;
}

int main() {
    float peso_;
    int idade_;
    pessoa lista[5];
    //Preenchimento do vetor contendo as structs
    for (int i = 0; i < 5; i++){
        printf("PESSOA [%d] ----------------------\n", i);
        printf("Peso [%d] : ", i);
        scanf("%f", &lista[i].peso);
        printf("Idade [%d] : ", i);
        scanf("%d", &lista[i].idade);
    }
    //1 Ordenação do vetor lista com base no peso
    for(int i = 0; i < 5-1; i++){
        for(int k = 0; k < 5-1-i; k++){
            if(lista[k].peso > lista[k+1].peso){
                int temp = lista[k].peso;
                lista[k].peso = lista[k+1].peso;
                lista[k+1].peso = temp;
            }
        }
    }
    // Busca binária por peso
    printf("Qual peso quer buscar? ");
    scanf("%f", &peso_);
    printf("%d", peso(lista, peso_));

    //Ordenação da lista com base na idade
    for(int i = 4; i >= 0; i--){
        for(int k = 4; k > -1-i; k--){
            if(lista[k].idade < lista[k+1].idade){
                int temp = lista[k].idade;
                lista[k].idade = lista[k+1].idade;
                lista[k+1].idade = temp;
            }
        }
    }
    // Busca binária por idade
    printf("\nQual idade quer buscar? ");
    scanf("%d", &idade_);
    printf("%d", idade(lista, idade_));
return 0;
}