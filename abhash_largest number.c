#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c;
    printf("Entert any three number\n");
    scanf("%f%f%f", &a,&b,&c);
    if(a>b && a>c)
    {
        printf("largest number is %f",a);
    }
    else if (b>c && b>a)
    {
        printf("largest number is %f",b);
    }
    else if(c>a && c>b)
    {
        printf("largest number is %f",c);
    }
    getch();
}
