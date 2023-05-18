#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,sum=0;
	printf("enter number to generate series:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	sum=sum+pow(i,i);
	}
	printf("sum is %d is %d",n,sum);
	return 0;
}