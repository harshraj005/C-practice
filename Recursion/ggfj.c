#include<stdio.h>
int add(int);
int main()
{
	int a=25,sum=0;
	sum=add(a);
	printf("sum=%d",sum);
	return 0;
}
int add(a)
{
	int sum=0;
	if(a!=0)
	sum=sum+a+add(a-1);
	else
	return sum;
}
