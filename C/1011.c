#include <stdio.h>
 
int main() {
    const double PI = 3.14159;
    double r, volume;
    
    scanf(" %lf", &r);
    
    volume = (4.0/3) * PI * (r*r*r);
    
    printf("VOLUME = %.3lf\n", volume);
    
    return 0;
}