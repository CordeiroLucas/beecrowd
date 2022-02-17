#include <stdio.h>
 
int main() {
    float tempo, velocidadeMedia, litros;
    
    scanf(" %f %f", &tempo, &velocidadeMedia);
    
    litros = (velocidadeMedia * tempo) / 12;
    
    printf("%.3f\n", litros);
    
    return 0;
}