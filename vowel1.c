#include<stdio.h>
int main()
{
    char a;
    printf("Enter any character : ");
    scanf("%c",&a);
    if((a>=65 && a<=90) || (a>=97 && a<=122))
    {
        if(a=='a' || a=='e' || a=='i' || a=='o'|| a=='u' || a=='A' || a=='E' || a=='I' || a=='O'|| a=='U')
        {
            printf("Vowels");
        }
        else{
            printf("Consonent");
        }
    }
    else{
        printf("Entered char is not valid");
    }
    return 0;
}