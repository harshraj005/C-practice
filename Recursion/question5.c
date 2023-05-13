#include<stdio.h>
int max(int);
int main()
{
	int a=1,sum;
	sum=max(a);
	printf("%d",sum);
	return 0;
}
int max(int a)
{
	if(a<=25)
	return(a+max(a+1));
	else
	return 0;
}
