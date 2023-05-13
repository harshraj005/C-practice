#include<stdio.h>
void ascii(int);
int main()
{
	int i=1;
	ascii(i);
	return 0;
}
void ascii(int a)
{
	printf("%d=%c\n",a,a);
	a=a+1;
	if(a<=255)
	ascii(a);
}
