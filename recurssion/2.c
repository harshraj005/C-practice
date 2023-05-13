#include<stdio.h>
int power(int ,int);
int main()
{
	int a,b,c;
	printf("Enter the number :");
	scanf("%d",&a);
	printf("Enter the power :");
	scanf("%d",&b);
	c=power(a,b);
	printf("Answer =%d",c);
	return 0;
}
int power(int x,int y)
{
	int z=1;
	if(y>0)
	z=z*x*power(x,(y-1));
	return z;
}
