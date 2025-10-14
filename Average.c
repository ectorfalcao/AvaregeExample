
#include <stdio.h>
#include <string.h>//não usei desculpa achei que usaria
int i;
    struct aluno{
        int matricula;
        char nome[50];
        float nota1;
        float nota2;
        float notaMedia;
    };
int main(){
    char name;
    struct aluno aluno1;
   printf("Digite o nome do aluno: ");
   scanf("%49s", aluno1.nome);
   printf("Digite a matrícula: ");
   scanf("%d", &aluno1.matricula);
   printf("Digite a 1a nota:");
   scanf("%2f", &aluno1.nota1);
   printf("Digite a 1a nota:");
   scanf("%2f", &aluno1.nota2);
  aluno1.notaMedia = (aluno1.nota1 + aluno1.nota2) / 2.0;  
  if(aluno1.notaMedia >= 6){
    printf(" Aluno: %.49s.\n Matrícula: %d.\n Nota 1: %f.\n Nota 2: %f.\n Nota média: %.2f.\n Situação: Aprovado.\n", aluno1.nome, aluno1.matricula, aluno1.nota1, aluno1.nota2,aluno1.notaMedia);
  }else{
printf(" Aluno: %.49s.\n Matrícula: %d.\n Nota 1: %f.\n Nota 2: %f.\n Nota média: %.2f.\n Situação: Reprovado.\n", aluno1.nome, aluno1.matricula, aluno1.nota1, aluno1.nota2,aluno1.notaMedia);
  }
  
  return 0;
}

