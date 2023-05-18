#include <stdio.h>

int soma(int a, int b);

int fatorial(int num);

int main()
{
    int a, b, result;
    
    int n, p;
    float combinacao;
    
    printf("Informe o primeiro número da soma: ");
    scanf("%d", &a);
    
    printf("Informe o segundo número da soma: ");
    scanf("%d", &b);
    
    result = soma(a, b);
    printf("\n Soma = %d \n", result);
    
    printf("Informe um valor: ");
    scanf("%d", &n);
    
    printf("Informe o segundo valor (menor que o primeiro): ");
    scanf("%d", &p);
    
    
    printf("\n Fatorial do primeiro valor: " "%d \n", fatorial(n));
    printf("\n Fatorial do segundo valor:" "%d \n", fatorial(p));
    
    combinacao = fatorial(n) / (fatorial(p) * fatorial(n-p));
    
    printf("\n %f \n", combinacao);
    
    return 0;
}

int soma(int a, int b){
    int r;
    r = a + b;
    
    return (r);
}

int fatorial(int num){
    int i, fat = 1;
    
    for (i = 1; i <= num; i++)
    fat = fat * i;
    
    return (fat);
}
