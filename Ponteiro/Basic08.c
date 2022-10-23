//https://accounts.google.com/ServiceLogin/webreauth?service=wise&passive=1209600&osid=1&continue=https%3A%2F%2Fdocs.google.com%2Fdocument%2Fu%2F3%2Fd%2F1sHz4V-7f0BTG3rNm-qsoUKuSSO3djOiYqUtanvmaCmc%2Fedit&followup=https%3A%2F%2Fdocs.google.com%2Fdocument%2Fu%2F3%2Fd%2F1sHz4V-7f0BTG3rNm-qsoUKuSSO3djOiYqUtanvmaCmc%2Fedit&ltmpl=docs&authuser=3&flowName=GlifWebSignIn&flowEntry=ServiceLogin
#include <stdio.h>

typedef struct Reta
{
    double X, Y;
}RETA;
 
int Verifica(RETA a, RETA b, RETA p)
{
    printf("X: %f\n", p.X);
    printf("Y: %f\n", p.Y);
       
	if(p.Y == 2*p.X+1)
    	return 1;
    else
    	return 0;
}
 
int main(void)
{
    RETA A = {2, 5};
    RETA B = {3, 7};
    RETA P = {5, 11};
    
    int res = Verifica(A, B, P);
    printf("%d\n",res);
 
    return 0;
}