#include<stdio.h>
int main()
{
    int a[5]={2,5,3,9,2};
    int b=a[0];
    for(int i=0;i<=4;i++)
    {
        if(a[i]>b)
        {
            b=a[i];
        }

    }
    printf("%d",b);
}