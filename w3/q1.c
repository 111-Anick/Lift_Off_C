#include<stdio.h>

int sqnum(int);

int main()
{
int n, square;

printf("\n Enter the no. you want to Square : ");
scanf("%d",&n);

square = sqnum(n);

printf("\n Square of no is : %d ", square);

}

int sqnum(int x)
{
return x*x;
}