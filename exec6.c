#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");

    float nota;
    float frequencia;
    printf("Digite a Nota do Aluno: ");
    scanf("%f", &nota);
    printf("Digite a Frequência do Aluno: ");
    scanf("%f", &frequencia);
    printf("\nA Nota do Aluno é: %.1f", nota);
    printf("\nA Frequência do Aluno é: %.2f", frequencia);

    if(nota >= 7 && frequencia >= 75) {
        printf("\nAluno Aprovado!");
    }
    else {
        printf("\nAluno Reprovado!");
    }
    return 0;
}
