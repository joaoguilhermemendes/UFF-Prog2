#include<stdlib.h>
#include <time.h>      
#include <unistd.h>     
#include <stdio.h>

//limita o tamanho do maior inteiro gerado
#define lim 100000000000
//N tamanho do vetor
#define N 1000000

int bubbleSort(int* V, int tam){
  int trocaCheck=0; //Variável de checagem para saber se houve modificação, linha 13
  
  for(int i=0; i<=tam;i++){
    if(V[i+1]<V[i]){ //Analisa as duplas e verifica se o valor da direita é menor que o da esquerda
      int aux;
      aux=V[i];
      V[i]=V[i+1];
      V[i+1]=aux;
      
      trocaCheck=1; //Identifica se houve alguma modificação
    }
  }
  
  if(trocaCheck==0) //linha 13, caso não ocorra modificação: o vetor já está organizado! Irá imprimi-lo!
      return 0;
  else //linha 13, caso tenha ocorrido modificação: o vetor ainda não está organizado, chama a função bubbleSort denovo com o vetor organizado até aqui!
    return bubbleSort(V, tam);
}

int main(){
  int k=0,tam=N;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tam);
  int V[tam];
  
  double time_spent = 0.0;
  clock_t begin = clock();
  
  srand(time(NULL));
  for(k=0;k<tam;k++)
      V[k]=rand()%lim;
  
  bubbleSort(V, tam);

  clock_t end = clock();
  time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
  printf("The elapsed time is %f seconds", time_spent);

  return 0;
}