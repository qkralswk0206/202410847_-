#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int num1, num2;
    int a_result, o_result, x_result;

   
    printf("Input two integers : ");
    scanf_s("%d  %d", &num1, &num2);

   
    a_result = num1 & num2;
    o_result = num1 | num2;
    x_result = num1 ^ num2;

   
    printf("��Ʈ ���� AND ���� ���: %d\n", a_result);
    printf("��Ʈ ���� OR ���� ���: %d\n",  o_result);
    printf("��Ʈ ���� XOR ���� ���: %d\n", x_result);

    return 0;
}
