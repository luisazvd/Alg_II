#include <stdio.h>

int raio (int r);

int main(){
    int r; 
    float area;
    
    printf("Informe o valor do raio: ");
    scanf("%d", &r);
    
    area = raio(r);
    
    printf("%f", area);
    
    return 0;
}


int raio(int r){
    float a;
    r = pow(r, 2);
    
    a = 3.14 * r;
    
    return a;
}
