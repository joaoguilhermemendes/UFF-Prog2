//https://accounts.google.com/ServiceLogin/webreauth?service=wise&passive=1209600&osid=1&continue=https%3A%2F%2Fdocs.google.com%2Fdocument%2Fu%2F3%2Fd%2F1sHz4V-7f0BTG3rNm-qsoUKuSSO3djOiYqUtanvmaCmc%2Fedit&followup=https%3A%2F%2Fdocs.google.com%2Fdocument%2Fu%2F3%2Fd%2F1sHz4V-7f0BTG3rNm-qsoUKuSSO3djOiYqUtanvmaCmc%2Fedit&ltmpl=docs&authuser=3&flowName=GlifWebSignIn&flowEntry=ServiceLogin
#include <stdio.h>

int main()
{
    int x=2;
    int *pt = &x;
    printf("x = %d\n", x); // Imprimir x
    printf("*pt = %d\n\n", *pt); // Imprimir valor pontado por pt (*pt) 
    
    *pt=5;
    printf("x = %d\n", x); // Imprimir x
    printf("*pt = %d\n\n", *pt); // Imprimir valor pontado por pt (*pt) 

    return 0;
}