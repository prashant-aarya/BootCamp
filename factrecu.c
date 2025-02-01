#include<stdio.h>

int fact(int n)
{
    if(n==2)
    {
        return 1;
    }
    
    return (n*fact(n-1));
}
int main()
{
    int n;
    printf("Enter any number :- ");
    scanf("%d",&n);
    
    printf("%d",fact(n));
    return 0;
}
