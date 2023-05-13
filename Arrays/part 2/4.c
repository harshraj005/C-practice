#include<stdio.h>
int modify(int *);
int main()
{
	int a[10],i;
	printf("Enter 10 numbers in array :\n");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	modify(a);
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
	return 0;
}
int modify(int *a)
{
	int i;
    for(i=0;i<10;i++)
    {
        a[i]=a[i]*3;
    }
    return a;
}
