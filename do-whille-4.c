#include<stdio.h>
int main()
{
	int i;
	printf("enter any number");
	scanf("%d",&i);
	
	do
	{
		printf("%d\n",i);
		i--;
	}while(i>=1);
}

