#include <stdio.h>

int main()
{
    int arr[20], n, i, s, l;
    printf("enter the number of elements : ");
    scanf("%d", &n);
    printf("enter elements into the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    s = arr[0];
    l = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] < s)
        {
            s= arr[i];
        }
        
        if (arr[i] > l)
        {
            l = arr[i];
        }
    }

    printf("\nLargest element is : %d", l);
    printf("\nSmallest element is : %d", s);

    return 0;
}