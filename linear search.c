#include<stdio.h>
#include<conio.h>
int main()
{
	int sc[10], i, val;
	
	printf("\nEnter the array element:\n");
	for(i=0;i<10;i++)
	scanf("%d",&sc[i]);
	
	printf("\nEnter the value to be search");
	scanf("%d",&val);
	
	for(i=0;i<10;i++)
	if(val==sc[i])
	{
	printf("\nElement is present at the location %d",i+1);
	break;
    }
    if(i==10)
    printf("\n%d this value does not  exists");
    getch();
}
