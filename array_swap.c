#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  srand(time(NULL));
  int x[10];
  int i;
  for(i=0; i<10;i++){
    if(i!=9){
    x[i]=rand();
    }
    else{
      x[i]=0;
    }
    printf("%d\n",x[i]);
  }
  printf("\n");
  int y[10];
  int j;
  for( j=0;j<10;j++){
    int *a= &x[9-j];
    y[j]=*a;
  printf("%d\n",y[j]);
  }
  return 0;
}
