#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct no {
  int valor;
  int valores;
  struct no *proximo;
} Node;

typedef struct {
  Node *inicio, *fim;
  int tamLista;
} Lista;

Node* iniciarLista(Lista *lista, int valor)
{ 
  //Inicia a lista como vazia
  lista->inicio = NULL;
  lista->fim = NULL;
  lista->tamLista = 0;
}

//Inserir valor inicial na lista
Node* inserirLista(Lista *lista, int valor) 
{
  Node *novo = (Node *)malloc(sizeof(Node)); 

  if(lista != NULL) {
    novo->valor = valor;
    novo->proximo = lista->inicio;
    lista->inicio = novo;
    lista->tamLista++;
  } 
}

//Imprime a lista
Node* tamanhoLista(Lista *lista) 
{
  Node *inicio = lista->inicio;
  
  printf("Tamanho da lista: %d\n", lista->tamLista);
  printf("\n\n");
}

//Verifica se a lista esta vazia
Node* listaVazia(Lista lista, int tamLista) \
{
  if(lista.tamLista == NULL) {
    printf("A lista esta vazia!\n");
  } else {
    printf("Existem elementos na lista!\n");
  }
}

Node* imprimirLista(Node *v)
{  
  while(v!=NULL) {
    printf("%d", v->valores);
    v=v->proximo;
  }
  printf("\n");
}

Node* inserirValorDireita(Node* right, int valor)
{
  Node* aux = right;

  while(aux->proximo != NULL)
      aux = aux->proximo;
        Node* novo = (Node*)malloc(sizeof(Node));
        novo->valores = valor;
        novo->proximo = NULL;
        aux->proximo = novo;
        return right;
}

Node* inserirValorEsquerda(Node* left, int valor)
{
    //Insere no primeiro elemento da lista
    Node* novo = (Node*)malloc(sizeof(Node));
    novo->valores = valor;
    novo->proximo = left;
    return novo;
}

#endif