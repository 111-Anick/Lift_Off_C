int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    printf("Factorial of %d is %d.", n, factorial(n));

    return 0;
}
