#include<stdio.h>
int main()
{
	int a[1000],i,n,min,max;
	printf("enter size of the array:");
	scanf("%d",&n);
	printf("enter the elements in array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	for(i=1;i<n;i++)
	{
		if(min>a[i])
		min=a[i];
		if(max<a[i])
		max=a[i];
	}
	printf("minimum of array is:%d\n",min);
	printf("maximum of array is:%d\n",max);
}