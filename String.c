#include<stdio.h>
#include<string.h>
char rev(char str[],int start,int end){
char temp;
temp=start;
if(start>=end)
return;
start=end;
end=start;
rev(str,start+1,end-1);
}
int main()
{
    char a[10];
    int b;
    printf("Enter any number :- ");
    scanf("%s",&a);
    b=strlen(a);
    rev(a,0,b);

}
