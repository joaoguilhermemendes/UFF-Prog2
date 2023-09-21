#include <stdio.h>

int BuscaBin(int x, int v[], int inicio, int fim){
    //Caso Base
    if(inicio>fim)
        return -1;
        
    //Caso Geral
    int meio = (inicio+fim)/2;
    
    if(v[meio]==x)
        return meio;
    
    if(v[meio]<x)
        return BuscaBin(x, v, meio+1, fim);
    if(v[meio]>x)
        return BuscaBin(x, v, inicio, meio-1);
}

int main(){
    int v[]={1, 8, 12, 23, 29, 30, 35, 82};
    int inicio, fim, x;
    
    scanf("%d" ,&x);
    
    inicio=0;
    fim=7;
    
    printf("%d" ,BuscaBin(x,v,inicio,fim));
    
    return 0;
}
