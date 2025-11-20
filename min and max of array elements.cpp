#include<stdio.h>
int main()
{
	int n,i,min,max;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter aray elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("Maximum element: %d\n",max);
	printf("Minimum element: %d\n",min);
	return 0;
}
