#include <stdio.h>
#include<stdlib.h>
#include <time.h>      
#include <unistd.h>     

//limita o tamanho do maior inteiro gerado
#define lim 1000000
//N tamanho do vetor
#define N 1000000

int Interative_bubbleSort(int* V,int n) {
  for (int i = 0; i < n-1; i++) {     
    for (int j = 0; j < n-i-1; j++) {
      if(V[j] > V[j+1]) {
          int temp = V[j];
          V[j] = V[j+1];
          V[j+1] = temp;
      }
    }
  }
    return *V;
}

int main()
{
  int k=0,tam=N;
  int V[N];

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tam);
  
  srand(time(NULL));
  for(k=0;k<tam;k++){
      V[k]=rand()%lim;
  }

  double time_spent = 0.0;
  clock_t begin = clock();
    
  /*for(int j=0;j<tam;j++){
      printf("%d ",V[j]);
  }
  printf("\n");
  printf("\n");
  printf("\n");*/
  
  Interative_bubbleSort(V, tam);
  
  /*for(int i=0; i<tam; i++) {
      printf("%d ",V[i]);
  }printf("\n");*/

  clock_t end = clock();
  time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
  printf("The elapsed time is %f seconds", time_spent);
  
  return 0;
}