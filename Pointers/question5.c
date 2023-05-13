#include<stdio.h>
#include<math.h>
int triangle(float *,float *,float *);
int main()
{
	float area,a,b,c;
	printf("Enter side 1 :");
	scanf("%f",&a);
	printf("\nEnter side 2 :");
	scanf("%f",&b);
	printf("\nEnter side 3 :");
	scanf("%f",&c);
	area=triangle(&a,&b,&c);
	printf("Area of triangle =%f",area);
	return 0;
}
int triangle(float *x,float *y,float *z)
{
	float no,ar,s;
	s=(*x+*y+*z)/2;
	no=s*(s-(*x))*(s-(*y))*(s-(*z));
	ar=sqrt(no);
	return (ar);
}
