#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct interesses {
	char *novoInteresse;
	struct interesses *prox;
};
struct interesses *primeiroI = NULL;

struct lista {
	char *name;
	char *date;
	char *email;
	char *cep;
	struct interesses *primeiroInteresse;
        struct lista *prox;
};
struct lista *primeiro = NULL;

void inserir(char *nome, char *data, char *email, char *cep, struct interesses *pInteresse)
{

	struct lista *aux = (struct lista*) malloc(sizeof(struct lista));

	aux->name = nome;
	aux->date = data;
	aux->email = email;
	aux->cep = cep;
	aux-> primeiroInteresse = pInteresse;

	aux->prox = primeiro;
	primeiro = aux;

}
struct interesses *inserirInteresses(char *interesse )
{

	struct interesses *novo = (struct interesses*) malloc(sizeof(struct interesses));

	novo->novoInteresse = interesse;
	novo->prox = primeiroI;
	primeiroI = novo;
	return primeiroI;

}

void imprimirUser() {
   struct lista *ptr = primeiro;
   printf("\nNO STRUCT : \n ");

   //start from the beginning
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
	struct interesses *primUser = (struct interesses*) malloc(sizeof(struct interesses)); //armazena primeiro interesse do usuario para cahr os proximos

	int i0 = 0;
	for(int i = 6; i < argc; i++) {
		interesses[i0] = argv[i];
		i0++;

	}
	printf("\n|Nome = %s\n|ID = %s\n|Nascimento = %s\n|email = %s\n|cep = %s",nome,  id, dataNascimento, email, cep);
	for (int j = 0; j < numInteresses; j++) {
		printf("\n|Interesse %d = %s", j+1, interesses[j]);
		primUser = inserirInteresses(interesses[j]);
	}

	inserir(nome, dataNascimento, email,cep, primUser);

	imprimirUser();

}
