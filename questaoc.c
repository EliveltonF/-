#include <stdio.h>
#include <string.h>
int main(void) {
int TotalContas = 0;
int dados[TotalContas][3]; 
for(int i = 0; i<TotalContas; i++) {
  dados[i][0] = 0.0;
}
int menu;
int conta = 100000;
while(menu != 0) {
  printf("[ 0 ]Fecha a aplicação\n");
  printf("[ 1 ]Cria uma conta\n");
  printf("[ 2 ]Consulta o saldo do cliente\n");
  printf("[ 3 ]Deposita um valor\n");
  printf("[ 4 ]Saca um valor\n");
  printf("[ 5 ]Encerre a conta\n");
  scanf("%d", &menu);
  if(menu == 0) {
    break;
  }
  if(menu == 1) {
    //concluido
    printf("Seja Bem vindo!\n");
    TotalContas += 1;
    dados[TotalContas-1][0] = conta+=1;//numConta
    printf("O numero da sua conta: %d\n",dados[TotalContas-1][0]);
    printf("\nDigite uma senha numerica: ");
    scanf("%d",&dados[TotalContas-1][2]);//Senha     
    }
    if(menu == 2) {
      //concluido
      int aux,aux2;
      printf("Digite o numero da conta: ");
      scanf("%d",&aux);
      printf("Digite a senha: ");
      scanf("%d",&aux2);
      for(int i = 0;i<TotalContas;i++) {
        if(aux == dados[i][0] && aux2 == dados[i][2]) {
          printf("Seu saldo bancario: %d\n",dados[i][1]);
        }
      }

    }
    if(menu == 3) {
      //concluido
      int contaAux1;
      printf("Digite o numero da conta: ");
      scanf("%d",&contaAux1);
      for(int i = 0;i<TotalContas;i++) {
        if(contaAux1 == dados[i][0]) {
          printf("Conta acessada com sucesso!\n");
        }
      }
      
      char aceita;
      printf("Deseja adicionar algum valor? [S/n]: ");
      scanf("%s",&aceita);
      for(int i = 0; i<TotalContas;i++) {
      if(contaAux1 == dados[i][0] && aceita == 'S'){
      printf("Digite o valor para deposito: ");
      scanf("%d",&dados[i][1]);//saldo
       }
       if(aceita == 'N' || aceita == 'n') {
      break;
       }
      }
    }
    if(menu == 4) {
      char aceita2;
      printf("Deseja sacar algum valor? [S/n]");
      scanf("%s",&aceita2);
      if(aceita2 == 'S' || aceita2 == 's') {
      int contaAux = 0;
      printf("Digite o numero da conta: ");
      scanf("%d",&contaAux);
      printf("Digite o valor para sacar: ");
      int sacar;
      getchar();
      scanf("%d",&sacar);
      for(int i = 0;i<TotalContas;i++) {
        printf("%d",dados[i][0]);
        printf("%d",contaAux);
        if(contaAux == dados[i][0]) {
          printf("entre");
          if(sacar > dados[i][1]) {
            printf("vc nao tem esse valor");
          }
          else{
            dados[i][1] = dados[i][1] - sacar;
            printf("%d",dados[i][1]);
            break;
            }
          }
       }
      }
    }
    if(menu == 5) {
      int finalizar;
      char HELP;
      printf("Deseja excluir uma conta ?");
      scanf("%s", &HELP);
      if(HELP == 'S' || HELP == 's') {
        printf("Digite o numero da conta: ");
        scanf("%d",&finalizar);
        for(int i = 0; i<TotalContas;i++) {
          if(finalizar == dados[i][0]) {
            dados[i][0] = 0;
            dados[i][1] = 0;
            dados[i][2] = 0;
            printf("Conta excluida!");
            break;
          }
        }
      }
    }
 }
return 0;
}
