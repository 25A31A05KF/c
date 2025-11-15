#include<stdio.h>
#include<conio.h>
int main()
{
	int a,ans;
	
	printf("Enter the value of year= ");
	scanf("%d",&a);
	ans = a *60*24*365;
	printf("Minutes = %d",ans);
	getch();
}
