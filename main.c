#include <stdio.h>

int main(void) {
    
    for (int i = 1; i <= 100; i++) {
        if(i % 3 == 0 && i % 5 == 0) {
            printf("fizz buzz");
        }
        else if(i % 3 == 0) {
            printf("fizz");
        }
        else if (i % 5 == 0) {
            printf("buzz");
        }
        else {
            printf("%d", i);
        }
        putchar('\n');
    }
    
    return 0;
}
