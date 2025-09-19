#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
typedef struct{
	char nome[50];
	int idade;
}Pessoa;
//Pessoa pessoas[],int quantidade
void cadastroPessoa(Pessoa pessoa[], int *quantidade){
	printf("\n=== CADASTRAR PESSOA ===\n");
	printf("Digite o nome: ");
    scanf("%s", pessoa[*quantidade].nome);  // lê string no campo nome

    printf("Digite a idade: ");
    scanf("%d", &pessoa[*quantidade].idade);

    (*quantidade)++; // aumenta a contagem de pessoas cadastradas
	
	
	printf("Pessoa cadastrada com sucesso!\n\n");
}
void listarPessoa(Pessoa pessoa[], int quantidade){
	printf("\n=== LISTA DE PESSOAS ===\n");
    int i;
	for (i = 0; i < quantidade; i++) {
        printf("%d - Nome: %s | Idade: %d\n", i + 1, pessoa[i].nome, pessoa[i].idade);
    }
    if (quantidade == 0) {
        printf("Nenhuma pessoa cadastrada ainda.\n");
    }
    printf("\n");
	
	
	
	
	
}
void atualizarPessoa(){
	
	
	
	
	printf("Pessoa atualizada com sucesso!\n\n");
}
void deletarPessoa(){
	
	
	
	
	printf("Pessoa deletada com sucesso!\n\n");
}

int main(){
	int escolha;
	setlocale(LC_ALL,"portuguese");
	
	Pessoa pessoa[100];
	int quantidade = 0;
	
	do{
	
		printf("Cadastro de pessoas\n");
		printf("Escolha uma opção: \n");
		printf("1-Cadastrar\n");
		printf("2-Listar\n");
		printf("3-Atualizar\n");
		printf("4-Deletar\n");
		printf("5-Sair\n");
		scanf("%d",&escolha);
		
		switch(escolha) {
			case 1:cadastroPessoa(pessoa,&quantidade);
				break;
			case 2:listarPessoa(pessoa,quantidade);
				break;
			case 3:atualizarPessoa();
				break;
			case 4:deletarPessoa();
				break;
			case 5:printf("Saindo...");
				break;
			default:printf("Escolha uma opção válida\n\n");
				break;					
		}
	}while(escolha != 5);

return 0;
}
