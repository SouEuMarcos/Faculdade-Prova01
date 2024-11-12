//Refaça o exerc´ıcio 01 utilizando estruturas de repetição.

#include <stdio.h>
#include <stdlib.h>

int main(){
  int A, I, M = 0; // atleta, idade, média maior idade
  float H, Q = 0; //altura, quantidade maior idade

  printf("Digite a idade e altura dos atletas (use .).\n");

  for(A = 0; A < 5; A++){
    printf("(Atleta: %d)\nIdade: ", A + 1);
    scanf("%d", &I);
    printf("Altura: ");
    scanf("%f", &H);
    if(I <= 0 || H <= 0){// invalidar qualquer valor <= 0
      printf("Idade ou altura invalida.\n\n");
      return 0;
    }else if(I < 18){
      printf("Menor de idade. Nao pode tomar whey.\n\n");
    }else{
      printf("Maior de idade. Pode tomar whey\n\n");
      M = M + I;// atualiza e soma a media dos maiores de idade
      Q++;// soma a quantidade
    }//else
  }//for
  M = M / Q;// conta pra descobrir a media dos maiores de idade
  printf("Media dos atletas que podem tomar whey: %.2f\n", M);

  int MAI, MEI;
  float HAI, HEI;

  MAI = I;
  MEI = I;
  HAI = H;
  HEI = H;

  if (I > MAI){ // atualiza a maior idade
    MAI = I;
    HAI = H;
  }if (I < MEI){ // atualiza a menor idade
    MEI = I;
    HEI = H;
  }//if
  printf("Atleta mais velho: %d anos tem %.2f de altura\n", MAI, HAI);
  printf("Atleta mais novo: %d anos tem %.2f de altura\n", MEI, HEI);
  return 0;
}//main
