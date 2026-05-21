#include <stdio.h>
#include <locale.h>

int main() {
     setlocale(LC_ALL, "Portuguese");
float valor;
printf("Digite o Valor da Compra: \n");
 scanf("%f", &valor);
printf("O Valor da Compra foi:\n  R$%.2f", valor);

if (valor > 100){
    printf("\nDesconto Aprovado");
}
else {
    printf("\nDesconto Negado");
}
    return 0;
}
