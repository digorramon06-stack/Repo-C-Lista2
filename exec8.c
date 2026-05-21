#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");

float temp;
printf("Digite a Temperatura do Ambiente:");
scanf("%d", &temp);

if(temp > 30) {
    printf("CALOR");
}
else{
    printf("FRIO");
}
    return 0;
}
