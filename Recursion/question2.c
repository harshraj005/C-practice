#include<stdio.h>
int prime(int);
int main()
{
	int a;
	printf("enter any number :");
	scanf("%d",&a);
	printf("The prime factors of %d are :",a);
	prime(a);
	return 0;
}
int prime(int a)
{
	int x;
    for(x=2;x<=a;x++)
    {
        if(a%x==0)
        {
            printf("%d, ",x);
            prime(a/x);
            break;
        }
    }
}
