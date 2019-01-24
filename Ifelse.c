#include <stdio.h>

/* This Program performs IF ELSE condition */

int main() 
{
	int n1 = 1;
	int n2 = 2;
	int choice;
	
	printf("Enter 1 for English Or 2 for Urdu: ");
	scanf("%d",&choice);
	
	if(choice==n1)
	{
		printf("Your Choice is English");
	}
	else if(choice==n2)
	{
		printf("Your Choice is Urdu");
	}
	else
	{
		printf("Your Choice is Potato");
	}
	
	return 0;
}
