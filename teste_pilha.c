//constantes
#define tamanho 10
//estrutura da pilha
struct tpilha{
	int dados[tamanho];
	int ini;
	int fim;
};

//variantes globais
struct tpilha pilha;

//mostrar o conteúdo da pilha
void pilha_mostrar(){
	int i;
	printf("[  ");
	for (i = 0; i < tamanho; i++){
		printf("%d ", pilha.dados[i]);
	}
	printf("]\n\n");
}
//adicionar um elemento no final da pilha sem controle
void pilha_entrar(){
	printf("\n digite um valor a ser empilhado: ");
	scanf("%d", &pilha.dados[pilha.fim]);
	pilha.fim++;
}
//adicionar um elemento no final da pilha com controle
void pilha_entrar2(){
	if(pilha.fim==tamanho){
		printf("\nA pilha está cheia, impossível empilhar novo elemento\n\n");
		system("pause");
	}
	else {
		printf("\nDigite o valor a ser empilhado: ");
		scanf("%d", &pilha.dados[pilha.fim]);
		pilha.fim++;
	}
}
//retirar o ultimo elemento da pilha com controle para não estourar
void pilha_sair(){
	if (pilha.ini == pilha.fim){
		printf("\n A pilha está vazia, não há nada para desempilhar\n\n");
		system("pause");
	}
	else{
		pilha.dados[pilha.fim-1] = 0;
		pilha.fim--;
		}
}

