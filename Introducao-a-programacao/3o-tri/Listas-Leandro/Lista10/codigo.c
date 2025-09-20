#include<stdio.h>

#define TEXTO_MAX 30

struct DadosAluno{
    int Matricula;
    char *Nome;
    char *Curso;
    float Altura;
};
typedef struct DadosAluno Aluno;

void leituraDadosAluno(Aluno *aluno){

    printf("Digite seu nome[max: %d caracteres]: ", TEXTO_MAX);
    fgets(aluno->Nome, TEXTO_MAX, stdin);

    printf("Digite seu curso: ");
    fgets(aluno->Curso, TEXTO_MAX, stdin);

    printf("Digite seu numero de matricula[max: %d caracteres]: ", TEXTO_MAX);
    scanf("%d", &aluno->Matricula);

    printf("Digite sua altura: ");
    scanf("%f", &aluno->Altura);
}

int main(int argc, char **argv){
    int opc = 0;
    int parar = 0;

    while(!parar){
        printf("Digite o numero correspondente a questao que deseja rodar:\n");
        printf("1. Rodar Questao 01;\n");
        printf("2. Rodar Questao 02;\n");
        printf("3. Rodar Questao 03;\n");
        printf("4. Rodar Questao 04;\n");
        printf("0. Sair.\n");

        scanf("%d", &opc);
        switch(opc){
            case 0:
                parar = 1;
                break;
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            default:
            printf("Valor de entrada inválido, tente novamente");
        }
    }

    return 0;
}