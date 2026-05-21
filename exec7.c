#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");

    int idade;
    printf("Digite sua Idade: ");
    scanf("%d", &idade);
    printf("Sua Idade é: %d", idade);

    if(idade >= 60) {
        printf("\nVocê é um Idoso.");
    }
    else if(idade >= 18) {
        printf("\nVocê é um Adulto.");
    }
    else {
        printf("\nVocê é um Menor de Idade.");
    }
    return 0;
}
