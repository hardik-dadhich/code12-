#include<stdio.h>
#include<conio.h>
int main()
{
	int n,temp,r,sum=0;
	printf("enter the no to check\n");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		r=temp%10;
		sum=sum+(r*r*r);
		temp=temp/10;
	}
	if(sum==n)
	{
		printf("the no is armstrong\n");
		
	}
	else
	{
		printf("the no is not amstrong\n");
		
	}
}
