

/*struct lista{
  int dado;
  struct lista* prox;
}Lista;

struct fila{
  Lista* ini;
  Lista* fim;
}Fila;*/


typedef struct Pessoa{

  char nome[40];
  int senha;
}pessoa;

typedef struct fila{
  struct Pessoa;
  int tempo;
  int ini;
  int fim;

};
