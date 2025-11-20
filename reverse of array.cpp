#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("reverse of the array is: ");
	for(i=n-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	return 0;
}
