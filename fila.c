#include "fila.h"
#include <stdio.h>
#include <stdlib.h>

//Vamos alterar esta estrutura para ficar de acordo com o trabalho
// Aqui segue um exemplo

/*struct lista{
  int dado;
  struct lista* prox;
}Lista;

struct fila{
  Lista* ini;
  Lista* fim;
}Fila;*/

//função criar fila
Fila* fila_cria(void){
  Fila* fila=(Fila*) malloc (sizeof(Fila)); //aloca espaço para afila
  fila->ini = fila->fim = NULL; // fila começa apontatno para null
  return fila;
}

//Função inserir
void inserir(Fila* fila,int valor){
  Lista* n = (Lista*) malloc(sizeof(Lista));
  n->info = valor;            // armazena informação
  n->prox = NULL;             // novo nó passa a ser o último
    if(fila->fim != NULL){    // verifica se lista não estava vazia
      fila->fim->prox = n;
    else{                 // fila estava vazia
      fila->ini = n;      // fila aponta para o novo elemeto
      fila->fim = n;
    }
  }
}

// verificar se alista estiver vazia
int fila_vazia(Fila* fila){
  return (fila->ini == NULL);
}

// remover elementos da lista
int remover(Fila* fila){
  Lista* t;
  int v;
  if(fila_vazia(fila)){
    printf("Fila Vazia\n");
    exit(1); // aborta programa
  }
  t = fila->ini;
  v = t->info;
  fila->ini = t->prox;
  if(fila->ini==NULL){ // verirfica se a fila ficou vazia:
    fila->fim = NULL;
    free(t);
    return v;
  }
}
