#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");

    int numero;
        printf("Digite um número:");
         scanf("%d", &numero);
         printf("O número digitado foi: %d", numero);
    if(numero > 0) {
        printf("\nO número %d é Positivo!");
    }
    else if(numero == 0){
        printf("\nO número %d é Zero!");
    }
    else{
        printf("\nO número %d é Negativo");
    }
    return 0;
}
