#include<stdio.h>
int main()
{
	int *pt;
	int a= 100;
	float *fp;
	float b=99.99;
	char *cp;
	char bool= 'y';
	pt= &a;
	fp= &b;
	cp= &bool;
	printf("\nAddress of a  = %u",pt);
	printf("\nAddress of b  = %u",fp);
	printf("\nAddress of c  =%u",cp);
}
