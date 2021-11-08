#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Hol(int X)
{
    if (X % 2 == 1)
    {
        printf("%d ", X);
    }
    return 0;
}

int JJak(int Y)
{
    if (Y % 2 == 0)
    {
        printf("%d ", Y);
    }
    return 0;
}

int main(void)
{
    int Array[10];
    int i;

    printf("5개의 숫자를 입력하세요 : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &Array[i]);
    }

    printf("\n홀수 출력 : ");
    for (int i = 0; i < 5; i++)
    {
        Hol(Array[i]);
    }

    printf("\n짝수 출력 : ");
    for (int i = 0; i < 5; i++)
    {
        JJak(Array[i]);
    }
    return 0;
}