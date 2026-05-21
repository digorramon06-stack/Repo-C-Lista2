#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");

char dinheiro;
char emprestimo;
printf("Você tem Dinheiro? [S/N]\n");
scanf(" %c", &dinheiro);

if(dinheiro == 'S'){
    printf("Você é Capaz de realizar a Compra!");
}
else if(dinheiro == 'N'){
    printf("Você pode realizar um Empréstimo? [S/N]\n");
    scanf(" %c", &emprestimo);
    if(emprestimo == 'S'){
        printf("Você é Capaz de realizar a Compra a partir de um Empréstimo!");
    }
    else{
        printf("Você Não é Capaz de ralizar a Compra!");
    }
    }
else {
    printf("Resposta Inválida!");
}

    return 0;
}
