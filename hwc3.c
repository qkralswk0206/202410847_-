#include <stdio.h>

int main() {
    int jul = 5; 

    for (int i = 1; i <= jul; i++) 
    { 
        for (int j = jul; j > i; j--) 
        {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) 
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

