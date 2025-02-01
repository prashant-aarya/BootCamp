#include<stdio.h>
int pow(int n)
{
    if(n==1) return 2;
    return 2*pow(n-1);
}
int main()
{
    int n;
    printf("Enter any number :- ");
    scanf("%d",&n);
    printf("Power : %d",pow(n));
}