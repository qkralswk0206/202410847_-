#include <stdio.h>

int main() {
    int num[5], odd[5], even[5];
    int oddcount = 0, evencount = 0;

    printf(" Please input five integers: ");
    scanf_s("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);

    for (int i = 0; i < 5; i++) {
        if (num[i] % 2 == 0) {
            even[evencount++] = num[i];
        }
        else {
            odd[oddcount++] = num[i];
        }
    }

    printf("Odd numbers: ");
    for (int i = 0; i < oddcount; i++) {
        printf("%d ", odd[i]);
    }

    printf("\nEven numbers: ");
    for (int i = 0; i < evencount; i++) {
        printf("%d ", even[i]);
    }

    return 0;
}
