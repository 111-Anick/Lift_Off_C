#include <stdio.h>
int k = 0, rem = 0;
int pal(int x)
{
    if (x == 0)
    {
        return k;
    }
    rem = x % 10;
    k = k * 10 + rem;
    x = x / 10;
    pal(x);
}
int main()
{
    int n;
    printf("Enter the number you want to check\n");
    scanf("%d", &n);
    if (pal(n) == n)
    {
        printf("It is a Palindrome number.");
    }
    else
    {
        printf("It is not a Palindrome number.");
    }
}