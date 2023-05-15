#include<stdio.h>
int main()
{
	int a,b,c,next,i,n;
	printf("enter a numbers:\n");
	scanf("%d %d %d",&a,&b,&c);
	for(i=0;i<=a;i++)
	{
	next=a;
	a=b;
	b=c;
	c=next;
    printf("swap the number %d %d %d\n",a,b,c);
	}
	return 0;
}