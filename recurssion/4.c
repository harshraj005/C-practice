#include<stdio.h>
int octal(int);
int main()
{
	int a,b;
	printf("Enter any decimal type number :");
	scanf("%d",&a);
	b=octal(a);
	printf("Answer =%d",b);
	return 0;
}
int octal(int a)
{
	static int sum,r,m=1;
	if(a!=0)
	{
		r=a%8;
		a=a/8;
		sum=(r*m)+sum;
		m=m*10;
		octal(a);
	}
	else 
	return sum;
}
