//call by refrence...unit 9:pointers (question1)
#include<stdio.h>
int avg(int *,int *,int *,int *,int *);
int sum(int *,int *,int *,int *,int *);
int main()
{
	int a,b,c,d,e,f,g;
	printf("enter 5 numbers :");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	f=sum(&a,&b,&c,&d,&e);
	g=avg(&a,&b,&c,&d,&e);
	printf("average=%d\nsum=%d",g,f);
	return 0;
}
int avg(int *m,int *n,int *o,int *p,int *q)
{
	int x=(*m+*n+*o+*p+*q)/5;
	return (x);
}
int sum(int *m,int *n,int *o,int *p,int *q)
{
	int x=(*m+*n+*o+*p+*q);
	return (x);
}
