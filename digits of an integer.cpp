#include<stdio.h>
int main()
{ int n;
printf("enter a number:");
scanf("%d",&n);

while(n!=0)
{
int digit = n % 10;
n = n / 10;
printf("%d,",digit);
}
return 0;
}
