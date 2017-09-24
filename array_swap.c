#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  srand(time(NULL));
  int x[10];
  for (int i= 0; i<10;i++){
    x[i]=rand();
    printf("%d\n",x[i]);
  }
  printf("\n");
  int y[10];
  for (int i=0;i<10;i++){
    int *a= &x[9-i];
    y[i]=*a;
  }
  for(int i=0;i<10;i++){
    printf("%d\n",y[i]);
  }

  
  return 0;
}
