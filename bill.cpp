#include<stdio.h>
int main()
{
	int units;
	float bill,total_bill,sc,adc;
	printf("Enter no. of units consumed: ");
	scanf("%d",&units);
	if(units<=50)
	bill=units*1;
	else if(units<=150)
	bill=50*1+(units-50)*2;
	else if(units<=250)
	bill=50*1+100*2+(units-150)*2;
	else
	bill=50*1+100*2+100*3+(units-250)*5;
	
	sc=bill*0.03;
	adc=bill*0.02;
	total_bill=sc+adc+bill;
	printf("%.2f\n %.2f\n %.2f\n %.2f\n",bill,sc,adc,total_bill);
	return 0;
}
