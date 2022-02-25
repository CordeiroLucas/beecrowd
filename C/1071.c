#include <stdio.h>
 
int main() {
 
    int sum = 0, num, x, y;
    
    scanf(" %d %d", &x,&y);
    
    if (x > y) {
        for (num = y+1; num < x; num++) {
            if (num % 2 == 0) {
                continue;
            }
            sum += num;
        }
    } else if (x < y) {
        for (num = x+1; num < y; num++) {
            if (num % 2 == 0) {
                continue;
            }
            sum += num;
        }
    } else {
        sum = 0;
    }
    
    printf("%d\n", sum);
    
    return 0;
}