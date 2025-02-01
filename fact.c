#include<stdio.h>
int main()
{
    int fact=1,n;
    printf("Enter the any number :- ");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("fact is %d",fact);
    return 0;
}