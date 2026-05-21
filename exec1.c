#include <stdio.h>
#include <locale.h>

int main() {
 setlocale(LC_ALL, "Portuguese");
    int idade;
    printf("Digite a sua Idade: ");
    scanf("%d", &idade);
    
    if (idade >= 18){
        printf("Entrada Liberada!");
    }
    else if (idade >= 16) {
        printf("Entrada Liberada com um Responsável");
    }
    else {
        printf("Entrada Proibida!");
    }

    return 0;
}
