#include<stdio.h>
int main()
{
    int y;
    printf("enter any year\n");
    scanf("%d", &y);
    if((y%100==0 && y%400==0)|| (y%100!=0 && y%4==0))
    {
        printf("given year is leap year");
    }
    else
    {
        printf("given year is not a leap year");
    }
    getch();
    return 0;
}
