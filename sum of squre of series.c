#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter a number to generate series:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)        
	sum+=i*i; 
	printf("sum is %d",sum);
	return 0;
}