#include "header.h"

int main(void) {
  Lista lista;
  int opcao;
  int valor;
  
  Node* v;

  //Menu de Opcoes
  do {
    printf("------ Lista Encadeada ------\n");
    printf("Escolha uma das opcoes: \n");
    printf("1 - Inserir valor inicial\n");
    printf("2 - A lista esta vazia?\n");
    printf("3 - Obter tamanho da lista\n");
    printf("4 - Imprimir toda a lista\n");
    printf("0 - Sair do programa\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
      case 1:
        printf("Digite o valor a ser inserido: ");
        scanf("%d", &valor);
        inserirLista(&lista, valor);
        break;
      case 2:
        listaVazia(lista, lista.tamLista);
        break;
      case 3:
        tamanhoLista(&lista);
        break;
      case 4:
        imprimirLista(v);
        break;
      case 0:
        printf("Finalizando o programa...");
        break;
      default: 
        printf("Opcao invalida!");
        break;
     }
    
  } while (opcao !=4);
  
  return 0;
}