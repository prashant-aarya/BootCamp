#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter any 3 number :- ");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2)
    {
        if(n1>n3)
        {
            printf("N1 is greater number");
        }
        else{
            printf("n2 is greater number");
        }
    }
    else if (n2>n3)
    {
        printf("n2 is greater number");
    }
    else{
        printf("n3 is greater number");
    }
    
}