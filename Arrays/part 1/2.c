//selecton sort...
#include<stdio.h>
int main()
{
	int arr[25];
	int temp,i,j;
	printf("Enter any 25 numbers in array :-\n");
	for(i=0;i<25;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<25;i++)
	{
		for(j=0;j<25;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("array:-\n");
	for(i=0;i<25;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
