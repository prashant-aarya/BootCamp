#include <stdio.h>
#include <stdbool.h>
int sum(int a[], int n, bool Od)
{
    int sum = 0, i;
    for (i = 0; i <= n; i++)
    {
        if (Od && a[i] % 2 == 0)
        {
            sum = sum + a[i];
        }
        else if (!Od && a[i] % 2 != 0)
        {
            sum = sum + a[i];
        }
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int a[n], i;
    for (i = 0; i <n; i++)
        scanf("%d", &a[i]);
    int evensum=sum(a, n, true);
    int oddsum=sum(a, n, false);
    printf("Even = %d",evensum);
    printf("\nOdd = %d",oddsum);

    return 0;
}
