//https://accounts.google.com/ServiceLogin/webreauth?service=wise&passive=1209600&osid=1&continue=https%3A%2F%2Fdocs.google.com%2Fdocument%2Fu%2F3%2Fd%2F1sHz4V-7f0BTG3rNm-qsoUKuSSO3djOiYqUtanvmaCmc%2Fedit&followup=https%3A%2F%2Fdocs.google.com%2Fdocument%2Fu%2F3%2Fd%2F1sHz4V-7f0BTG3rNm-qsoUKuSSO3djOiYqUtanvmaCmc%2Fedit&ltmpl=docs&authuser=3&flowName=GlifWebSignIn&flowEntry=ServiceLogin
#include <stdio.h>
void somatorio(int *x, int *y, int *somat, int n){
    for(int i=1; i<=n; i++){
        *somat = i+(*somat);
    }
}

void produtorio(int *x, int *y, int *prodt, int n){
    for(int i=1; i<=n; i++){
        *prodt = i*(*prodt);
    }
}

int main()
{
    int x, y, n;
    int somat=0, prodt=1;
    
    scanf("%d", &n);
    
    somatorio(&x, &y, &somat, n);
    produtorio(&x, &y, &prodt, n);
    
    printf("Somatório dos %d primeios termos do Naturais: %d\n" ,n ,somat);    
    printf("Produtório dos %d primeios termos do Naturais: %d\n" ,n ,prodt);

    return 0;
}