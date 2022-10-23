//https://accounts.google.com/ServiceLogin/webreauth?service=wise&passive=1209600&osid=1&continue=https%3A%2F%2Fdocs.google.com%2Fdocument%2Fu%2F3%2Fd%2F1sHz4V-7f0BTG3rNm-qsoUKuSSO3djOiYqUtanvmaCmc%2Fedit&followup=https%3A%2F%2Fdocs.google.com%2Fdocument%2Fu%2F3%2Fd%2F1sHz4V-7f0BTG3rNm-qsoUKuSSO3djOiYqUtanvmaCmc%2Fedit&ltmpl=docs&authuser=3&flowName=GlifWebSignIn&flowEntry=ServiceLogin
#include <stdio.h>

struct aluno {
    char nome[81];
    float p1;
    float p2;
};

void imprime_nome_notas(char *nome, float *p1, float *p2){
    printf("\nNome: %s\n" ,nome);
    printf("P1: %.1f\n" ,*p1);
    printf("P2: %.1f\n\n" ,*p2);
}

void altera_nota(float *p1){
    float new_p1;
    printf("Qual a nova nota de P1? ");
    scanf("%f" ,&new_p1);
    *p1 = new_p1;
}

int main()
{
    struct aluno Aluno;
    
    scanf("%s" ,Aluno.nome);
    scanf("%f %f" ,&Aluno.p1 ,&Aluno.p2);

    imprime_nome_notas(Aluno.nome, &Aluno.p1, &Aluno.p2);
    
    altera_nota(&Aluno.p1); printf("P1: %.1f\n" ,Aluno.p1);

    return 0;
}