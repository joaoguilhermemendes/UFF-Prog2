#include <stdio.h>

int bubbleSort(int V[]){
    int trocaCheck=0; //Variável de checagem para saber se houve modificação, linha 13
    
    for(int i=0; i<=7;i++){
        if(V[i+1]<V[i]){ //Analisa as duplas e verifica se o valor da direita é menor que o da esquerda
            int aux;
            aux=V[i];
            V[i]=V[i+1];
            V[i+1]=aux;
            
            trocaCheck=1; //Identifica se houve alguma modificação
        }
    }
    
    if(trocaCheck==0){ //linha 13, caso não ocorra modificação: o vetor já está organizado! Irá imprimi-lo!
        printf("Vetor Ordenado: ");
        for(int j=0; j<=7; j++){
            printf("%d " ,V[j]);
        } printf("\n");
        return 0;
    }
        
    else //linha 13, caso tenha ocorrido modificação: o vetor ainda não está organizado, chama a função bubbleSort denovo com o vetor organizado até aqui!
        return bubbleSort(V);
}

int main(){
    int V[]={25, 48, 37, 12, 57, 86, 33, 92};
    
    printf("Vetor Original: ");
    for(int i=0; i<=7; i++){
        printf("%d " ,V[i]);
    } printf("\n");
    
    bubbleSort(V);
}