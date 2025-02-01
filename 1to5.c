#include<stdio.h>
int Num(int i,int n)
{
    if(i>n) return 0;
    printf("%d ",i);
    Num(i+1,n);
}
int main()
{
    int n;
    printf("Enter any number :- ");
    scanf("%d",&n);
    Num(1,n);
}