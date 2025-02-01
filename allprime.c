#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number :- ");
    scanf("%d",&n);
    for(int i=3;i<=n;i+=2)
    {
        int f=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            printf("%d\t",i);
        }
        
    }
}