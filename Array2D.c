#include <stdio.h>

/* This Program Prints 2D Array */

int main() 
{
	int arr[2][4] = {1,2,3,4,5,6,7,8};
	int i;
	int j;
	printf("Output of 2D Array\n");
		for (i=0; i<2; i++)
		{
			printf("\n%d. ",i+1);
			for (j=0; j<4; j++)
			{
				printf("%d",arr[i][j]);
			}
		}
	
	return 0;
}
