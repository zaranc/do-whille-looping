#include<stdio.h>
int main()
{
	long int i,n=1,factorial_number=1;
	printf("ENTER THE ANY YOUR NUMBER = ");
	scanf("%d",&i);
	
	for(n=1; n<=i; n++)
	{
	   factorial_number= factorial_number*n;
	  
	}
	printf("FACTORIAL OF %d is %d",i,factorial_number);
}

