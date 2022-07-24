#include<stdio.h>
int main()
{
	double arr[10],sum=0.0;
	int count =0;
	while (count<10)
	{
		printf("Enter a number");
		scanf("%lf",&arr[count]);
		sum+=arr[count];
		++count;
	}
	printf("sum=%.2lf\n average=%.2lf",sum,sum/10);
}
