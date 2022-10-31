#include<stdio.h>
int square(int);
int main()
{
    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    square(n);
    getch();
    return 0;
}
int square(int a)
{
    int sq;
    sq=a*a;
    printf("square of given number is %d",sq);
}
