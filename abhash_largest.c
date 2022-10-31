#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c;
    printf("enter any three number");
    scanf("%f%f%f", &a,&b,&c);
    if (a>b && a>c)
    {
        printf("largest number is %f",a);

    }
    else if ( b>c && b>a)
    {
        printf("largest number is %f",b);
    }
    else
    {
        printf ("largest number is %f",c );
    }
    getch();
    return 0;

}

