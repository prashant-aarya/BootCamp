#include<stdio.h>
int Sum(int n)
{
    if(n==0)
    {
        return 1;
    }
   
    printf(" %d",n);
   
    return (Sum(n-1));
    
}
int main()
{
    int n,sum=0;
    printf("Enter any number :- ");
    scanf("%d",&n);
    Sum(n);
    return 0;
}