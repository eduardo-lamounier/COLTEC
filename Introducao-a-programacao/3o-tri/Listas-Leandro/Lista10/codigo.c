#include<stdio.h>

#define TEXTO_MAX 30

struct Aluno{
    int Matricula;
    char *Nome;
    char *Curso;
    float Altura;
};

// outras funções (estou com preguiça agora)

struct Aluno novoAluno(){
    struct Aluno aluno;

    printf("Digite seu nome: ");
    fgets(aluno.Nome, TEXTO_MAX, stdin);

    printf("Digite seu curso: ");
    fgets(aluno.Curso, TEXTO_MAX, stdin);

    printf("Digite seu numero de matricula: ");
    scanf("%d", &aluno.Matricula);

    printf("Digite sua altura: ");
    scanf("%f", &aluno.Altura);

    return aluno;
}

int main(int argc, char **argv){

}