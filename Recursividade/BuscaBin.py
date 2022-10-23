def BuscaBin(x, v, inicio, fim):
    #Caso Base
    if inicio>fim:
        return -1
    
    #Caso Geral
    meio = (fim+inicio)//2
    if v[meio]==x:
        return meio
        
    if v[meio]<x:
        return BuscaBin(x, v, meio+1, fim)
    if v[meio]>x:
        return BuscaBin(x, v, inicio, meio-1)
    
x = int(input())
v = (1, 8, 12, 23, 29, 30, 35, 83)

inicio=0;
fim=7;
print(BuscaBin(x, v, inicio, fim))