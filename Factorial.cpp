#include<stdio.h>
int main()
{
	int x=1,fact=1,n;
	printf("enter a number to find factorial:");
	scanf("%d",&n);
	while(x<=n)
	{
		fact=fact*x;
		x++;
	}
	printf("factorial of %d is:%d",n,fact);
	
}
