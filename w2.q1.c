#include <stdio.h>
int main() 
{
    int a,sum=0,n;
    printf("enter a number:\n");
    scanf("%d",&a);
    while(a!=0)
    {
        n=a%10;
        sum=sum+n;
        a=a/10;
     }
    printf("the sum of digits:%d",sum);
    return 0;
    }