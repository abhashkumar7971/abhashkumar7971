#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter the value of a,b,c");
    scanf("%f%f%f", &a,&b,&c);
    if(a+b>c)
    {
        if(a+c>b)
        {
            if(b+c>a)
                printf("given triangle is valid");
        }
    }
    else
    {
        printf("given triangle is not valid");
    }
    getch();
    return 0;
}
