#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the 3 Size of triangle : ");
    scanf("%d%d%d",&a,&b,&c);
    if(c<(a+b) && b<(a+c) && a<(b+c))
    {
        printf("Valid Triangle");
    }
    else{
        printf("Not Valid Triangle");
    }
    return 0;
}    