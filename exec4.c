#include <stdio.h>
#include <locale.h>

int main() {
     setlocale(LC_ALL, "Portuguese");

int numero;
printf("Digite um número: ");
scanf("%d", &numero);
printf("O número digitado foi: %d", numero);

if(numero <= 10) {
    printf("\nCategoria A");
}
else if (numero <= 20) {
    printf("\nCategoria B");
}
else if (numero <= 30) {
    printf("\nCategoria C");
}
else{
    printf("\nNumero Inválido");
}
    return 0;
}
