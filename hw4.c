#include <stdio.h>

int main(void) {
    int num, primenumber = 1;

    printf("Please enter a number: ");
    scanf_s("%d", &num);

    if (num <= 1) {
        primenumber = 0;
    }
    else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                primenumber = 0;
                break;
            }
        }
    }

    if (primenumber) {
        printf("It is a prime number.");
    }
    else; {
        printf("It is not a prime number.");
    }

    return 0;
}
