/*
Autor: Moises Auad Werneck
Data: 19/04/2024
Descrição: Calcula a exponenciação entre dois números.
Entrada: dois inteiros
Saída: um inteiro
Defesa: Os números devem ser inteiros.
*/
#include <stdio.h>
#include <locale.h>
int main() {
    int n, e, nn, c = 1;
    printf("Digite a base e o expoente: ");
    scanf("%d %d", &n, &e);
    nn = n;
    while (c < e){
        n *= nn;
        c += 1;
    }
    printf("O número %d elevado a %d é igual a %d", nn, e, n);
    
    
return 0;
}