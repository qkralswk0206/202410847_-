#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


double StdDevia(int* arr)  //������ �Լ� ������
{
    double sigma;
    double Sum = 0, aver, minus, qwer;
    int i;
    for (i = 0; i < 5; i++) {
        Sum += arr[i];
    }
    aver = (double)Sum / 5;
    Sum = 0;
    for (i = 0; i < 5; i++) {
        minus = arr[i] - aver;
        qwer = pow(minus, 2.0);
        Sum += qwer;
    }
    Sum /= 5;
    sigma = sqrt(Sum);
    return sigma;
}

int main()   //���� �Լ�
{
    int arr[5];
    int i;
    printf("Enter 5 real numbers: ");
    scanf_s("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    printf("Standard Deviation = %f", StdDevia(arr));
    return 0;
}