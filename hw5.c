#include <stdio.h>

void printJinsu(int n) {
    if (n == 0) {
        return;
    }

    printJinsu(n / 2);

    printf("%d", n % 2); //나머지 먼저 출력해주기
}

int main() {
    int number;
    printf("Please enter a number: ");
    scanf_s("%d", &number);

    printJinsu(number);
    return 0;
}
