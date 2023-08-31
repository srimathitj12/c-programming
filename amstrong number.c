#include<stdio.h>
int main()
{
	int on,n,r,result=0;
	scanf("%d",&n);
	on=n;
	while(on!=0)
	{
		r=on%10;
		result+=r*r*r;
		on/=10;
	}
	if(result==n)
	{
		printf("amstrong");
	}
	else
	printf("not amstrong");
}