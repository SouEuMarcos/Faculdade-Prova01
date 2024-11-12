/*
O professor Dalberto A. est´a animado com a vida de esportista, principalmente no crossfit ajudando outros atletas de sua academia com as quantidades corretas de whey na
suplementa¸c˜ao alimentar. Para isso, ele precisa organizar as informa¸c˜oes de cada atleta, e coletar dados
que o ajudam a estimar a propor¸c˜ao correta. Al´em disso, ele s´o pode recomendar o uso do whey para os
maiores de idade, sabe-se l´a por qual motivo aleat´orio. Como o professor Dalberto ´e muito desorganizado,
ele n˜ao consegue estimar direito os c´alculos sem a ajuda de um programa. Assim, auxilie o professor em
sua tarefa elaborando um programa que leia as idades e alturas de cinco atletas, sendo cada um dos atletas
identificado atrav´es de um c´odigo num´erico inteiro. O programa deve:

a) informar, atrav´es de seus c´odigos, quais os atletas que tˆem menos de 18 anos e n˜ao podem tomar whey;
b) informar as m´edias das idades dos atletas que podem tomar whey;
c) informar a altura do atleta mais jovem e a do mais velho
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int I1, I2, I3, I4, I5; //idade atleta 1,2,3...
  float H1, H2, H3, H4, H5, M = 0, Q = 0; //altura atleta 1,2,3... M = média e Q = quantidade

  printf("Digite a idade a altura dos atletas (use .).\n");

  printf("(ATLETA 1):\nIdade: ");// peço idade
  scanf("%d", &I1);// salvo idade
  printf("Altura: ");// peço altura
  scanf("%f", &H1); // salvo altura
  if(I1 <= 0 || H1 <= 0){
    printf("Idade e/ou Altura invalida.\n");
    return 0;
  }else if(I1 < 18){
    printf("Menor de idade. Nao pode tomar whey.\n\n");
  }else{
    printf("Maior de idade. Pode tomar whey.\n\n");
    M = M + I1;
    Q++;
  }// comparativo maior e menor de idade, se for maior de idade salvo a idade e acrescento 1 na quantidade

  printf("\n(ATLETA 2):\nIdade: ");
  scanf("%d", &I2);
  printf("Altura: ");
  scanf("%f", &H2);
  if(I2 <= 0 || H2 <= 0){
    printf("Idade e/ou Altura invalida.\n");
    return 0;
  }else if(I2 < 18){
    printf("Menor de idade. Nao pode tomar whey.\n\n");
  }else{
    printf("Maior de idade. Pode tomar whey.\n\n");
    M = M + I2;
    Q++;
  }

  printf("\n(ATLETA 3):\nIdade: ");
  scanf("%d", &I3);
  printf("Altura: ");
  scanf("%f", &H3);
  if(I3 <= 0 || H3 <= 0){
    printf("Idade e/ou Altura invalida.\n");
    return 0;
  }else if(I3 < 18){
    printf("Menor de idade. Nao pode tomar whey.\n\n");
  }else{
    printf("Maior de idade. Pode tomar whey.\n\n");
    M = M + I3;
    Q++;
  }

  printf("\n(ATLETA 4):\nIdade: ");
  scanf("%d", &I4);
  printf("Altura: ");
  scanf("%f", &H4);
  if(I4 <= 0 || H4 <= 0){
    printf("Idade e/ou Altura invalida.\n");
    return 0;
  }else if(I4 < 18){
    printf("Menor de idade. Nao pode tomar whey.\n\n");
  }else{
    printf("Maior de idade. Pode tomar whey.\n\n");
    M = M + I4;
    Q++;
  }

  printf("\n(ATLETA 5):\nIdade: ");
  scanf("%d", &I5);
  printf("Altura: ");
  scanf("%f", &H5);
  if(I5 <= 0 || H5 <= 0){
    printf("Idade e/ou Altura invalida.\n");
    return 0;
  }else if(I5 < 18){
    printf("Menor de idade. Nao pode tomar whey.\n\n");
  }else{
    printf("Maior de idade. Pode tomar whey.\n\n");
    M = M + I5;
    Q++;
  }
  M = M / Q;
  printf("Media dos atletas que podem tomar whey: %.2f\n", M);

  int MAI, MEI;// maior idade, menor idade
  float HAI, HEI;// menor altura, menor idade

  MAI = I1;
  MEI = I1;
  HAI = H1;
  HEI = H1;
//atribuo valores iniciais ao menor e maior altura e idade
  if(I2 > MAI){
    MAI = I2;
    HAI = H2;
  }else if(I2 < MEI){
    MEI = I2;
    HEI = H2;
  }if(I3 > MAI){
    MAI = I3;
    HAI = H3;
  }else if(I3 < MEI){
    MEI = I3;
    HEI = H3;
  }if(I4 > MAI){
    MAI = I4;
    HAI = H4;
  }else if(I4 < MEI){
    MEI = I4;
    HEI = H4;
  }if(I2 > MAI){
    MAI = I5;
    HAI = H5;
  }else if(I5 < MEI){
    MEI = I5;
    HEI = H5;
  }//sequencia de if e else/if pra descobrir menor e maior idade, e comparar as alturas e ir substituindo

  printf("Atleta mais velho: %d anos tem %.2f de altura\n", MAI, HAI);
  printf("Atleta mais novo: %d anos tem %.2f de altura\n", MEI, HEI);
  return 0;
}//main
