#include<stdio.h>
int op()
{
    int want=1;
    do
    {
         int a,x,y,z;
    printf("\nEnter 1 for addition");
    printf("\nEnter 2 for subtract :");
    printf("\nEnter 3 for multiplication :");
    printf("\nEnter 4 for divide :");
    scanf("%d",&a);
    printf("\nEnter the two number :- ");
    scanf("%d %d",&x,&y);
    switch (a)
    {
    case 1:z=x+y;
    break;
    case 2: z=x-y;
    break;
    case 3: z=x*y;
    break;
    case 4: z=x/y;
    break;
    default : printf("\nPlease enter correct choice ");
    }
    printf("%d",z);
    printf("\n Do you want to perform action again press 1 or any number");
    scanf("%d",&want);
    
    } while (want==1);
}
int main()
{
    op();
    return 0;
}
    
   
