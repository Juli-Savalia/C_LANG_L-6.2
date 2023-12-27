#include<stdio.h>

void main()
{
	int n,i,fibo;
	
	printf("enter any number:-");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		fibo=fibo*n;
	}
	printf("your fibonacci series is %d",fibo);
}
