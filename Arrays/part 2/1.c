#include<stdio.h>
int main()
{
	int i,j,arr[25],A[25],d=0;
	printf("Enter 25 numbers in the array (arr[25])");
	for(i=0;i<25;i++)
	scanf("%d",&arr[i]);
	for(i=24;i>=0;i--)
	{
		A[d]=arr[i];
		d++;
	}
	printf("New Array (A[25]) =");
	for(i=0;i<25;i++)
	printf("%d ",A[i]);
	return 0;
}
