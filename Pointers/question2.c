#include<stdio.h>
int aver(int *,int *,int *);
int per(int *,int *,int *);
int main()
{
	int maths,english,science;
	float p,q;
	printf("enter marks in maths :");
	scanf("%d",&maths);
	printf("enter marks in english :");
	scanf("%d",&english);
	printf("enter marks in science :");
	scanf("%d",&science);
	p=aver(&maths,&english,&science);
	q=per(&maths,&english,&science);
	printf("Result of student :\n");
	printf("Average Marks :%f\n",p);
	printf("Percentage :%f %\n",q);
}
int aver(int *x,int *y,int *z)
{
	int m=(*x+*y+*z)/3;
	return (m);
}
int per(int *x,int *y,int *z)
{
	int m=(((*x+*y+*z)*100)/300);
	return (m);
}
