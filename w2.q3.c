
#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[50];
  	int i, a;
  	a = 1;
 
  	printf("\n Please Enter any String :  ");
  	scanf("%[^\n]",&str);
	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			a++;	
		} 
	}	
	printf("\n The Total Number of Words in the String  = %d",a);
	
  	return 0;
}