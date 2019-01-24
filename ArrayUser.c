#include <stdio.h>

/* This Program Take values in array and Prints Them */

int main() 
{
	int arr[8];
	int i;
	
	printf("Insert Values in Array\n");
	for(i=0;i<8;i++)
	{
		scanf("%d\n",&arr[i]);
	}
	
	printf("\nOutput of Array\n");
	for(i=0; i<8; i++)
	{
		printf("%d\n",arr[i]);
	}
	
	return 0;
}
