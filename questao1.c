#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  char compromisso[100];
  printf("Compromisso: ");
  scanf("%s",compromisso);
  printf("DATA : %s \nHORA : %s\n",__DATE__,__TIME__);
  return 0;
}
