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

    printf("5���� ���ڸ� �Է��ϼ��� : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &Array[i]);
    }

    printf("\nȦ�� ��� : ");
    for (int i = 0; i < 5; i++)
    {
        Hol(Array[i]);
    }

    printf("\n¦�� ��� : ");
    for (int i = 0; i < 5; i++)
    {
        JJak(Array[i]);
    }
    return 0;
}