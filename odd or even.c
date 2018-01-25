#include<stdio.h>
void main()
{
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("The given number is EVEN");
    }
    else
    {
        printf("the given number is ODD");
    }
    getch();
}
