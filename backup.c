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

void printUser(struct lista *user)
{
	if (user) {
		printf("User:\n");
		printf("Nome: %s\n", user->name);
		printf("Data de nascimento: %s\n", user->date);
		printf("Email: %s\n", user->email);
		printf("CEP: %s\n", user->cep);

		struct interesses *curr = user->primeiroInteresse;
		int i = 0;
		while (curr) {
			printf("Interesse %d: %s\n", i + 1, curr->novoInteresse);
			curr = curr->prox;
			i++;
		}
	}
}

struct lista *primeiro = NULL;

void inserir(char *nome, char *data, char *email, char *cep, struct interesses *pInteresse)
{
	struct lista *aux = (struct lista*) malloc(sizeof(struct lista));

	aux->name = nome;
	aux->date = data;
	aux->email = email;
	aux->cep = cep;
	aux->primeiroInteresse = pInteresse;

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
	FILE *file_ptr = fopen("backup.txt", "a");
	char *id;
	char *nome;
	int numInteresses = 0;
	char *dataNascimento;
	char *email;
	char *cep;

	nome = argv[1];
	dataNascimento = argv[2];
	email = argv[3];
	cep = argv[4];

	numInteresses = argc - 5;

	char *interesses[numInteresses];
	struct interesses *primUser = (struct interesses*) malloc(sizeof(struct interesses)); //armazena primeiro interesse do usuario para cahr os proximos

	int i0 = 0;
	for(int i = 5; i < argc; i++) {
		interesses[i0] = argv[i];
		i0++;

	}
	
	printf("** Usuário '%s' inserido através de 'backup.c' **\n", nome);
	// printf("\n|Nome = %s\n|Nascimento = %s\n|email = %s\n|cep = %s\n",nome, dataNascimento, email, cep);
	
	for (int j = 0; j < numInteresses; j++) {
		// printf("\n|Interesse %d = %s", j+1, interesses[j]);
		primUser = inserirInteresses(interesses[j]);
	}
	printf("\n");

	inserir(nome, dataNascimento, email,cep, primUser);

	struct lista *curr = primeiro;

	while (curr) {
		fprintf(file_ptr, "Nome: %s, ", curr->name);
		fprintf(file_ptr, "Data de Nascimento: %s, ", curr->date);
		fprintf(file_ptr, "Email: %s, ", curr->email);
		fprintf(file_ptr, "CEP: %s, ", curr->cep);
		
		struct interesses *curr_interest = curr->primeiroInteresse;
		int i = 0;

		fprintf(file_ptr, "Interesses: [");


		while (curr_interest) {
			if (!(curr_interest->prox)) {
				fprintf(file_ptr, "%d: %s", i + 1, curr_interest->novoInteresse);
			} else {
				fprintf(file_ptr, "%d: %s, ", i + 1, curr_interest->novoInteresse);
			}
			curr_interest = curr_interest->prox;
			i++;
		}

		fprintf(file_ptr, "]\n");

		curr = curr->prox;
	}
}
