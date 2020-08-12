#include<stdio.h>
int main()
{
    int num, x[3];
    scanf("%d", &x[0]);
    scanf("%d", &x[1]);
    scanf("%d", &x[2]);
    num = x[0] + x[1] + x[2];

    if (num <= 49)
    {
        printf("F");
    }
    else if (num <= 54)
    {
        printf("D");
    }
    else if (num <= 59)
    {
        printf("D+");
    }
    else if (num <= 64)
    {
        printf("C");
    }
    else if (num <= 69)
    {
        printf("C+");
    }
    else if (num <= 74)
    {
        printf("B");
    }
    else if (num <= 79)
    {
        printf("B+");
    }
    else if (num <= 100)
    {
        printf("A");
    }
    return 0;
}
