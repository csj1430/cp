#include <stdio.h>    

int main(void)
{
    float km;

    printf("Please enter kilometers:");
    scanf_s("%f", &km);

    printf("%.1f km is equal to %.1f miles.\n", km, km * 0.6213712);

    return 0;
}