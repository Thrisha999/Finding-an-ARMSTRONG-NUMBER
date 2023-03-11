#include<stdio.h>
void main()
{
	int prime(),armstrong();
	int n,c,temp,sum;
	printf("enter the number:\n");
	scanf("%d",&n);
	c=prime(n);
	if(c==2)
	{
		printf("%d is a prime number",n);
	}
	else
	{
		printf("%d is not a prime number",n);
	}
	sum=armstrong();
	if(n==sum)
	{
		printf("%d is a armstrong number",n);
	}
	else
	{
		printf("%d is not an armstrong number",n);
	}
}
int prime(int n)
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	return c;
}
int armstrong(int n)
{
	int r,sum=0;
	while(n>0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	return sum;
}
