#include<stdio.h>
int main()
{
	int n, i=0;
	printf("ENTER THE ANY NUMBER = ");
	scanf("%d",&n);

    for(i=0; i<=n; i++)
	{
		if(i%2==0)
		printf("THIS IS THE EVEN NUMBER = %d\n",i);
		
	}
}

