#include <stdio.h>

void quickSort(int V[7], int first, int last){
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
    int V[]={25, 48, 37, 12, 57, 86, 33, 92};
    
    quickSort(V, 0, 7); //V[7], first, last
    
    for(int i=0; i<=7; i++){
        printf("%d " ,V[i]);
    }

    return 0;
}