#include<stdio.h>
#include<math.h>
int fact(int a){
	int i, fact=1;
	for(int i=1;i<=a;i++){
		fact=fact*i;
	}
	return fact;
}
int main (){
	int x,y,i,j,n;
	float sum=0;
	printf("enter x:");
	scanf("%d", &x);
	printf("enter n:");
	scanf("%d", &n);
	for(i=1,j=1;i<=n;i++,j++)
	{
		if(i%2==0)
		{
			sum=sum-pow(x,j)/fact(j);
		}
		else
		{
			sum=sum+pow(x,j)/fact(j);
		}
	}
	printf("%f", y, sum);
	return 0;
}