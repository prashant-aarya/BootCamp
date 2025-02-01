#include<stdio.h>
void Fibo(int a,int b,int n)
{
    if(n==0)
    {
        return;
    }
    int p=a+b;
    printf(" %d",p);
    Fibo(b,p,n-1);
}


int main()
{
    int n;
    printf("Enter any number :- ");
    scanf("%d",&n);
    printf("0 1");
    Fibo(0,1, n-2);
}
