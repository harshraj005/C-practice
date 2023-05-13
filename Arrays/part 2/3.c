#include<stdio.h>
int main()
{
	int arr[25],a,i;
	printf("Enter 25 numbers in array :");
	for(i=0;i<25;i++)
	scanf("%d",&arr[i]);
	a=arr[0];
	for(i=1;i<25;i++)
	{
		if(arr[i]<a)
		a=arr[i];
	}
	printf("Smallest number in this Array is %d",a);
	return 0;
}
