#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct lista {
	char *name;
	char *date;
	char *email;
	char *cep;
        struct lista *prox;
};

struct lista *primeiro = NULL;
struct lista *atual = NULL;

void inserir(char *nome, char *data, char *email, char *cep )
{

	struct lista *link = (struct lista*) malloc(sizeof(struct lista));

	link->name = nome;
	link->date = data;
	link->email = email;
	link->cep = cep;

	link->prox = primeiro;

	primeiro = link;
}

void printList() {
   struct lista *ptr = primeiro;
   printf("\nNO STRUCT : \n ");

	while(ptr != NULL) {
		printf("| Nome = %s \n| Data = %s \n|Email = %s \n|Cep = %s",ptr->name,ptr->date,ptr->email,ptr->cep);
		ptr = ptr->prox;
  	}

}


int main(int argc, char **argv)
{

	char *id;
	char *nome;
	int numInteresses = 0;
	char *dataNascimento;
	char *email;
	char *cep;

	id = argv[1];
	nome = argv[2];
	dataNascimento = argv[3];
	email = argv[4];
	cep = argv[5];

	numInteresses = argc - 6;

	char *interesses[numInteresses];
	int i0 = 0;
	for(int i = 6; i < argc; i++) {
		interesses[i0] = argv[i];
		i0++;

	}

	inserir(nome, dataNascimento, email,cep);


	printf("\n|Nome = %s\n|ID = %s\n|Nascimento = %s\n|email = %s\n|cep = %s",nome,  id, dataNascimento, email, cep);
	for (int j = 0; j < numInteresses; j++) {
		printf("\n|Interesse %d = %s", j+1, interesses[j]);
	}

	printList();

}
