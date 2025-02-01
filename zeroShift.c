#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int f=0,e=n-1;
    while(f<e)
    {
        if(arr[f]==0)
        {
            arr[f]=arr[e];
            arr[e]=0;

            e--;
        }
        while(f<e && arr[e]==0)
        {
           e--;
        }
        f++;
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}