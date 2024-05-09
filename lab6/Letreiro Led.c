/*
Autor: Moises Auad Werneck
Descrição: Revela quantos leds são necessário para exibir números com base em uma tabela pré-fornecida.
Entrada: um inteiro
Saída: um inteiro
Defesa: deve ser inteiro positivo.
*/


#include <stdio.h>

int main(void);
int led_algarismo(int);
int total_led(int);

int led_algarismo(int n){
    switch (n) {
        case 1:
            return 2;
        case 2:
            return 5;
        case 3:
            return 5;
        case 4:
            return 4;
        case 5: 
            return 5;
        case 6:
            return 6;
        case 7: 
            return 3;
        case 8:
            return 7;
        case 9:
            return 6;
        case 0:
            return 6;
    }
}

int total_led(int n){
    int leds = 0;
    if (n == 0){
        return 6;
    }
    while (n != 0){
        leds += led_algarismo(n%10);
        n /= 10;
    }
    return leds;
}
int main() {
    int num;
    printf("Digite o numero a ser analisado: ");
    scanf("%d", &num);
    if (num < 0){
        printf("ERRO.");
        return 1;
    }
    printf("O total de leds para o numero %d eh %d.", num, total_led(num));
    return 0;
}