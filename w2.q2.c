#include <stdio.h>
int main() 
{
    int a[20],n,sum=0;
    printf("enter the size of the array:\n");
    scanf("%d",&n);
    printf("enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
      if(a[i]%2==0 || i%2==0)
      {
          sum=sum+a[i];
        
      }
    }
    printf("sum=%d",sum);
    return 0;

}

