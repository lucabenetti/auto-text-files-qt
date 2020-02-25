#include <stdio.h>

char buffer[100000];
char end[10000];
char nomeAluno [10000];

void func(char *tipo, int n, FILE *aluno) {
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
	func ("freq", frequencia, aluno);

	printf("Social: ");
	scanf("%d", &social);
	func ("social", social, aluno);

	printf("Atividade: ");
	scanf("%d", &atividade);
	func ("ativ", atividade, aluno);

	printf("Oral: ");
	scanf("%d", &oral);
	func ("oral", oral, aluno);

	printf("Portugues: ");
	scanf("%d", &portugues);
	func ("portugues", portugues, aluno);

	printf("Arte: ");
	scanf("%d", &arte);
	func ("artes", arte, aluno);

	printf("Ed. Fisica: ");
	scanf("%d", &edfisica);
	func ("edfisica", edfisica, aluno);

	printf("Matematica: ");
	scanf("%d", &matematica);
	func ("matematica", matematica, aluno);

	printf("Ciencias: ");
	scanf("%d", &ciencias);
	func ("ciencias", ciencias, aluno);

	printf("Historia: ");
	scanf("%d", &historia);
	func ("historia", historia, aluno);	

	printf("Geografia: ");
	scanf("%d", &geografia);
	func ("geografia", geografia, aluno);

	printf("Ingles: ");
	scanf("%d", &ingles);
	func ("ingles", ingles, aluno);
	
	return 0;
}
