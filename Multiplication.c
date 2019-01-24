#include <stdio.h>

/* This Program Multiply 2 Numbers and Print Output */

int main() 
{
	int n1;
	int n2;
	int result;
	
	printf("Enter Number 1: ");
	scanf("%d",&n1);

	printf("Enter Number 2: ");
	scanf("%d",&n2);
	
	result = n1*n2;
	printf("\n%d", result);
	
	return 0;
}
