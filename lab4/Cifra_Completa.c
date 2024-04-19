/*
Autor: Moises Auad Werneck
Data: 19/04/2024
Descrição: Cifra um letra concedida
Entrada: um char
Saída: outro char
Defesa: O input deve ser char
*/
#include <stdio.h>
int main() {
    char letra;
    char cifra;
    int i=1;
    while (i <= 3) { 
    printf("Digite uma letra: ");
    scanf("\n%c", &letra);
    if (!((letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z'))) {
        printf("\nO valor digitado é inválido.");
        return 1;
    }
    else if (letra >= 'A' && letra <= 'Z') {
        cifra = ((letra - 64 + 12)%26) + 64;
        printf("\nA cifra de %c é %c", letra, cifra);
    }
    else if (letra >= 'a' && letra <= 'z') {
        cifra = ((letra - 96 + 12)%26) + 96;
        printf("\nA cifra de %c é %c", letra, cifra);
    }
    i += 1;
    printf("\n\n");
    };
return 0;
}