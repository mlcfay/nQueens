/* Autor: Marcelo Fay */

# include <stdio.h>
# include <stdlib.h>

int n; // 'n'
int flag; // ainda n sei se vou usar;

void mostraSolucao(int v*); // Printa o vetor solucao;

int main(){
  int board*; // tabuleiro;
  int linhaControle;
  
  printf("Digite o N: ");
  scanf("&d", &n);
  
  board = (int *) malloc(sizeof(int) * n); // aloca espaco pro tabuleiro;
  
  for (linhaControle = 0; linhaControle < n; linhaControle++)
    Posiciona(board, 0, linhaControle); // 1º param: board; 2º param: numero da coluna; 3º param: linhaControle;
  