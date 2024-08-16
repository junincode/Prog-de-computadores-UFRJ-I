#include <stdio.h>

int ocorrencia(char str1[100], char str2[100]){
        int j = 0;
        for(int i = 0; str1[i] != '\n'; i++){
            for(int k = 0; str2[k] != '\n'; k++){
                if (str1[i + k] == str2[k] || str1[i + k] == str2[k] + 32 || str1[i + k] == str2[k] - 32){
                    j = 1;
                    continue;
                }
                j = 0;
                break;
            }
            if(j){
                break;
        }
    }
    return j;
}

int main(){
    
    char str1[100], str2[100];
    printf("Digite uma frase: ");
    fgets(str1, 100, stdin);
    printf("Digite uma frase: ");
    fgets(str2, 100, stdin);
    printf("%d", ocorrencia(str1, str2));
    return 0;
}
