#include<stdio.h>
int main()
{
    float a;
    printf("enter any number\n");
    scanf("%f", &a);
    if(a<0)
    {
        printf("given number is negative");
    }
    else if(a==0)
    {
        printf("given number is zero");
    }
    else if(a>0)
    {
        printf("given number is positive");
    }
    getch();
    return 0;
}
