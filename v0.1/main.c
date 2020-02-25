#include <stdio.h>

char buffer[100000];
char end[10000];
char nomeAluno [10000];

void freq(char *tipo, int n, FILE *aluno) {
	char temp[100];
	sprintf(temp,"%s%d.txt", tipo, n);
	FILE *archive = fopen (temp, "r");
	fscanf(archive,"%[^\n]s", buffer);
	fprintf(aluno,"%s\n", buffer);
	fclose(archive);
}

int main () {
	int frequencia;
	int social;
	int atividade;
	int oral;
	int portugues;
	int arte;
	int edfisica;
	int matematica;
	int ciencias;
	int historia;
	int geografia;
	int ingles;

	printf("Nome do aluno: ");
	scanf("%[^\n]s",nomeAluno);

	sprintf(end,"alunos//%s.txt", nomeAluno);

	FILE *aluno = fopen(end, "w");

	printf("Frequencia: ");
	scanf("%d", &frequencia);
	freq ("freq", frequencia, aluno);

	printf("Social: ");
	scanf("%d", &social);
	freq ("social", social, aluno);

	printf("Atividade: ");
	scanf("%d", &atividade);
	freq ("ativ", atividade, aluno);

	printf("Oral: ");
	scanf("%d", &oral);
	freq ("oral", oral, aluno);

	printf("Portugues: ");
	scanf("%d", &portugues);
	freq ("portugues", portugues, aluno);

	printf("Arte: ");
	scanf("%d", &arte);
	freq ("artes", arte, aluno);

	printf("Ed. Fisica: ");
	scanf("%d", &edfisica);
	freq ("edfisica", edfisica, aluno);

	printf("Matematica: ");
	scanf("%d", &matematica);
	freq ("matematica", matematica, aluno);

	printf("Ciencias: ");
	scanf("%d", &ciencias);
	freq ("ciencias", ciencias, aluno);

	printf("Historia: ");
	scanf("%d", &historia);
	freq ("historia", historia, aluno);	

	printf("Geografia: ");
	scanf("%d", &geografia);
	freq ("geografia", geografia, aluno);

	printf("Ingles: ");
	scanf("%d", &ingles);
	freq ("ingles", ingles, aluno);
	
	return 0;
}
