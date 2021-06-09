#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

//constantes
#define tamanho 5

//estrutura da fila

struct tfila {
	int dados[tamanho];
	int ini;
	int fim;

};

//variaveis globais
struct tfila fila;
int op;

// prototipação
void fila_entrar();
void fila_sair();
void fila_mostrar();
void mostrar_menu();

//função principal

int main(){
	setlocale(LC_ALL,"Portuguese");
	op = 1;
	fila.ini = 0;
	fila.fim = 0;
	
	while (op !=0){
		system("cls");
		fila_mostrar();
		mostrar_menu();
		scanf("%d", &op);
		switch (op){
			case 1:
				fila_entrar();
				break;
			case 2:
				fila_sair();
				break;
			}
		}
		return(0);
	}
//adicionar um elemento a fila
void fila_entrar(){
	if(fila.fim == tamanho){
		printf("A fila está cheia, volte outro dia\n\n");
		system("pause");
	}
	else {
		printf("Digite o valor a ser inserido\n");
		scanf("%d", &fila.dados[fila.fim]);
		fila.fim++;
		
	}
}
//retirar um elemento da fila
void fila_sair(){
	if(fila.ini == fila.fim){
		printf("Fila vazia, mas logo aparece alguém\n");
	}
	else{
		int i;
		for(i = 0; i < tamanho; i++){
			fila.dados[i] == fila.dados[i+1];
		}
		fila.dados[fila.fim] = 0;
		fila.fim--;
	}
}
//mostrar o conteúdo da fila
void fila_mostrar(){
	int i;
	printf("[   ");
	for (i=0; i< tamanho; i++){
		printf("%d", fila.dados[i]);
		}
		printf("   ]\n\n");
}

//mostrar menu de opções
void mostrar_menu(){
	printf("\nEscolha uma opção\n");
	printf("\n1- Inserir elemento na fila\n");
	printf("\n2- Remover elemento da fila\n");
	printf("\n0 - Sair\n");
}

