/*
O Prof. Bernando Farreto foi a seu estabelecimento favorito na cidade
tomar uma cerveja no final de semana. No entanto, por restri¸c˜oes m´edicas, o mesmo s´o poderia consumir
uma quantidade m´axima de 150ml de ´alcool puro. Levando-se em considera¸c˜ao o volume do Pint servido
no estabelecimento (473ml), elabore um programa que auxilie o professor a saber quantos Pint ele pode
tomar de cada de tipo de cerveja dispon´ıvel, considerando:
• 1 - Ipa - 6,8% de teor alco´olico - R$30/L;
• 2 - Lager - 4,2% de teor alco´olico - R$22/L;
• 3 - Weiss - 5,1% de teor alco´olico - R$32/L;
• 4 - Stout - 4,7% de teor alco´olico - R$35/L.
O programa deve apresentar um menu de op¸c˜ao ao usu´ario, onde ser´a escolhido qual tipo de cerveja o mesmo
deseja tomar. A partir da escolha, o programa deve imprimir o n´umero m´aximo de Pints que o usu´ario
pode tomar da cerveja escolhida, levando-se em conta sua condi¸c˜ao, e quanto ficaria o valor da sua conta
no bar caso ele tome esse n´umero m´aximo de Pints (pode ser quebrado), considerando tamb´em uma taxa
de servi¸co de 10%. O programa tamb´em dever´a apresentar uma important´ıssima mensagem em caixa alta:
”SE BEBER, N~AO DIRIJA”
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int O;// opção
  float MP, VC, VCT;//maximo pints, valor da conta, valor da conta com taxa

  printf("Escolha a cerveja:\n1 - Ipa - 6,8 porcento de teor alcoolico - R$30/L.\n2 - Lager - 4,2 porcento de teor alcoolico - R$22/L.\n3 - Weiss - 5,1 porcento de teor alcoolico - R$32L.\n4 - Stout - 4,7 porcento de teor alcoolico - R$35/L.\n");
  scanf("%d", &O);

  /*
  - 150ml  máximo de álcool puro que o coitado pode beber == 0.150 conversão p/ litros
  - 0.473 = 473 (ml do pints) / 1000 (que seria o litro) == conversão de ml p/ litros
  - teor alcólico de cada cerveja / 100 para converter em numero decimal
  - MP = máximo de pits que pode ser tomado p/ cada cerveja
  - 0.10 = taxa serviço de 10%
  */
  switch (O){
    case 1:
    printf("Voce escolheu Ipa!\n");
    MP = 0.150 / (0.068 * 0.473);
    printf("Pode tomar %.2f Pints de Ipa.\n", MP);
    VC = MP * 0.473 * 30;
    VCT = VC + (VC * 0.10);
    printf("Valor da conta sem taxa: %.2f\nValor com 10 porcento taxa de servico: %.2f\n", VC, VCT);
    break;
    case 2:
    printf("Voce escolheu Lager!\n");
    MP = 0.150 / (0.042 * 0.473);
    printf("Pode tomar %.2f Pints de Lager.\n", MP);
    VC = MP * 0.473 * 22;
    VCT = VC + (VC * 0.10);
    printf("Valor da conta sem taxa: %.2f\nValor com 10 porcento taxa de servico: %.2f\n", VC, VCT);
    break;
    case 3:
    printf("Voce escolheu Weiss!\n");
    MP = 0.150 / (0.051 * 0.473);
    printf("Pode tomar %.2f Pints de Weiss.\n", MP);
    VC = MP * 0.473 * 32;
    VCT = VC + (VC * 0.10);
    printf("Valor da conta sem taxa: %.2f\nValor com 10 porcento taxa de servico: %.2f\n", VC, VCT);
    break;
    case 4:
    printf("Voce escolheu Stout!\n");
    MP = 0.150 / (0.047 * 0.473);
    printf("Pode tomar %.2f Pints de Stout.\n", MP);
    VC = MP * 0.473 * 35;
    VCT = VC + (VC * 0.10);
    printf("Valor da conta sem taxa: %.2f\nValor com 10 porcento taxa de servico: %.2f\n", VC, VCT);
    break;
    default:
    printf("opcao invalida\n");
    return 0;
  }
  printf("\nSE BEBER, NAO DIRIJA!\n");
  return 0;
}
