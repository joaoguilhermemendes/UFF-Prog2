//https://accounts.google.com/ServiceLogin/webreauth?service=wise&passive=1209600&osid=1&continue=https%3A%2F%2Fdocs.google.com%2Fdocument%2Fu%2F3%2Fd%2F1sHz4V-7f0BTG3rNm-qsoUKuSSO3djOiYqUtanvmaCmc%2Fedit&followup=https%3A%2F%2Fdocs.google.com%2Fdocument%2Fu%2F3%2Fd%2F1sHz4V-7f0BTG3rNm-qsoUKuSSO3djOiYqUtanvmaCmc%2Fedit&ltmpl=docs&authuser=3&flowName=GlifWebSignIn&flowEntry=ServiceLogin
#include <stdio.h>
void somaProd(int *soma, int *prod, int *x, int *y){
    *soma = *x + *y;
    *prod = *x * *y;
}

int main()
{
    int x=1;
    int y=2;
    int V[2];
    int soma, prod;
    
    somaProd(&soma, &prod,&x, &y);
    
    printf("%d\n" ,soma);
    printf("%d\n" ,prod);

    return 0;
}