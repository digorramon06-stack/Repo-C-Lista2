#include <stdio.h>
#include <locale.h>

int main() {
     setlocale(LC_ALL, "Portuguese");

float nota;
printf("Digite a Nota do Aluno: ");
scanf("%f", &nota);
printf("\nA Nota do Aluno é: %.1f", nota);

if(nota >= 7){
    printf("\nAluno Aprovado!");
}
else if(nota >= 5){
    printf("\nAluno em Recuperação");
}
else{
    printf("\nAluno Reprovado");
}


    return 0;
}
