#include<stdio.h>
int main()
{
	int mark;mark==100;
	printf("enter a mark\n");
	scanf("%d" ,&mark);
	if(mark>=900)
	printf("grade 'A'\n ");
	else if(mark>=800)
	printf("grade 'B'\n ");
	else if(mark>=700)
	printf("grade'c'\n");
	else if(mark>=600)
	printf("grade 'd'\n");
	else if(mark>=560)
	printf("grade 'e'\n");
	else
	printf("fail");
	return 0;
}