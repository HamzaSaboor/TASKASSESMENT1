#include <stdio.h>

/* This Program Take values in array and Prints Max Values */

int main() 
{
	int a[8];
	int i;
	
	printf("Insert Values in Array\n");
	for(i=0;i<8;i++)
	{
		scanf("%d\n",&a[i]);
	}
	
	int currentMax=a[0];
	
	for(i=1;i<8;i++)
	{
		if(a[i]>currentMax)
		{
			currentMax=a[i];
		}
	}
	
	printf("\n%d is Max Value", currentMax);
	
	return 0;
}
