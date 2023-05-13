#include<stdio.h>
int main()
{
	int arr[25];
	int a,i,count=0;
	printf("Enter 25 numbers in an array");
	for(i=0;i<25;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number you want to search:");
	scanf("%d",&a);
	for(i=0;i<25;i++)
	{
		if(a==arr[i])
		count++;
	}
	printf("The number %d is %d times present in array...",a,count);
	return 0;
}
