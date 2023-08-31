#include<stdio.h>
int main()
{
	int i,n,a[100],large;
	printf("enter value of n:");
	scanf("%d",&n);
	printf("enter the numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	large=a[0];
	for(i=1;i<n;i++)
	{
		if(large<a[i])
		{
			large=a[i];
		}
	}
	printf("the biggest out of n=%d",large);
}