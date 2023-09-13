#include<stdio.h>
int main()
{
	int n, i=0;
	printf("ENTER THE ANY NUMBER = ");
	scanf("%d",&n);
	
	for(i=0; i<=n; i++)
	{
		if(i%2==1)
		printf("this is the odd number = %d\n",i);
		
	}
}

