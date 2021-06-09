//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//constantes
#define tamanho 5

//estrutura da pilha

struct tpilha {
	int dados [tamanho];
	int ini;
	int fim;
};

//variaveis globais

struct tpilha pilha;
int op;

//prototipa��o
void pilha_entrar();
void pilha_sair();
void pilha_mostrar();
void menu_mostrar();

//fun��o principal
int main(){
	setlocale(LC_ALL, "Portuguese");
	op = 1;
	pilha.ini = 0;
	pilha.fim = 0;
	while (op !=0) {
		system("cls");
		pilha_mostrar();
		menu_mostrar();
		scanf("%d", &op);
		switch (op){
			case 1:
				pilha_entrar();
				break;
			case 2:
				pilha_sair();
				break;
				}
	} 
	return(0);
}
//adicionar um elemento ao final da filha
void pilha_entrar(){
	if (pilha.fim == tamanho){
		printf("\n A pilha est� cheia");
		system("pause");
		}
		else {
			printf("\nDigite o valor a ser empilhado");
			scanf("%d", &pilha.dados[pilha.fim]);
			pilha.fim++;
		}
}
//retirar o ultimo elemento da pilha
void pilha_sair(){
	if (pilha.ini == pilha.fim){
		printf("\nA pilha est� vazia, n�o � possivel remover nenhum elemento");
		system("pause");
	}
	else {
		pilha.dados[pilha.fim-1] = 0;
		pilha.fim--;
	}
}

//mostrar o conteudo da pilha
void pilha_mostrar(){
	int i;
	printf("[   ");
	for (i=0; i < tamanho; i++) {
		printf("%d ", pilha.dados[i]);
	}
	printf("  ]");
}

//mostrar o menu de op��es
void menu_mostrar(){
	printf("\nEscolha uma op��o");
	printf("\n1- Empilhar\n");
	printf("\n2- Desempilhar\n");
	printf("\n0 - Sair\n");
}
