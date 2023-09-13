#include<stdio.h>
int main()
{
	long int i,n=1,factorial_number=1;
	printf("ENTER THE ANY YOUR NUMBER = ");
	scanf("%d",&i);
	do
	{
	   factorial_number= factorial_number*n;
	   n++;
	}while(n<=i);
	printf("FACTORIAL OF %d is %d",i,factorial_number);
}

