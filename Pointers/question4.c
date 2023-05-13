#include<stdio.h>
int shift(int *,int *,int *);
int main()
{
	int a,b,c;
	printf("enter three numbers as a,b and c :");
	scanf("%d%d%d",&a,&b,&c);
	shift(&a,&b,&c);
	printf("a=%d,b=%d,c=%d",a,b,c);
	return 0;
}
int shift(int *x,int *y,int *z)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=*z;
	*z=temp;
}
