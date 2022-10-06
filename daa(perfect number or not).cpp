#include<stdio.h>
int main()
{
	int n,rem,sum=0,i;
	printf("enter the number=");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		rem=n%i;
		if(rem==0)
		{
			sum+=i;
		}
	}
	if(sum==n)
	printf("%d is a perfect number",n);
	else
	printf("%d isn't a perfect number",n);
	
}
