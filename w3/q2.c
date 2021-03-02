#include <stdio.h>
int factorial(int x)
{
    int fact=1;
    for (int i = 2; i <= x; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    printf("Factorial of %d is %d.", n, factorial(n));

    return 0;
}