#include <stdio.h>
double projetos[10];
struct {
  int Numero_do_projeto;
  double valor;
  char tipo;
} Projeto;

int main(void) {
  printf("Número do projeto: ");
  scanf("%d",&Projeto.Numero_do_projeto);
while(Projeto.Numero_do_projeto != -1) {
  printf("Valor do Projeto: ");
  scanf("%lf", &Projeto.valor);
  printf("Tipo de despesa (R ou D)");
  getchar();
  scanf("%c",&Projeto.tipo);
  if(Projeto.tipo == 'R' || Projeto.tipo == 'r') {
    projetos[Projeto.Numero_do_projeto] += Projeto.valor;
  }
  else if(Projeto.tipo == 'D' || Projeto.tipo == 'd') {
    projetos[Projeto.Numero_do_projeto] -= Projeto.valor;
    }
  else {
    printf("Erro!!!!");
  }

}
for(int i = 0; i<10; i++) {
  printf("\nSaldo do projeto %d = %2.f\n",i, projetos[i]);
}
  return 0;
}
