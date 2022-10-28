#include <stdio.h>
#include<stdlib.h>
#include <time.h>      
#include <unistd.h>     

//limita o tamanho do maior inteiro gerado
#define lim 1000000000
//N tamanho do vetor
#define N 1000000

void quickSort(int* V, int first, int last){
    int i, j, pivot, temp;
    if(first<last){
        pivot=first;
        i=first;
        j=last;
        
        while(i<j){
            //ItemFromLeft (Achar o primeiro elemento maior que o pivô pela esquerda)
            while(V[i]<=V[pivot] && i<last)
                i++;
            
            //ItemFRomRight (Achar o primeiro elemento menor que o pivô pela direita)
            while(V[j]>V[pivot])
                j--;
                
            //Se a posição de i<j, troca V[i] por V[j]
            if(i<j){
                temp=V[i];
                V[i]=V[j];
                V[j]=temp;
            }
        }

        temp=V[pivot];
        V[pivot]=V[j];
        V[j]=temp;
        quickSort(V,first,j-1);
        quickSort(V,j+1,last);
    }
}

int main(){
    int k=0,tam=N;
    int V[N];

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    srand(time(NULL));
    for(k=0;k<=tam;k++){
        V[k]=rand()%lim;
    }

    /*for(int l=0;l<tam; l++){
        printf("%d ",V[l]);
    }printf("\n");*/

    double time_spent = 0;
    clock_t begin = clock();
        
    quickSort(V, 0, tam);

    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The elapsed time is %f seconds\n", time_spent);
    
    /*for(int i=1; i<=tam; i++){
        printf("%d " ,V[i]);
    }printf("\n");*/

    return 0;
}