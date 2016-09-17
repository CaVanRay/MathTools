#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
//*****************************************************
int IsDivisible(int x)
{
	int count, quotient, flag;
	for (count = 1; count < x; count++)
	{
	if (x%count == 0)
		{
		quotient = x / count;
		printf("\n\t\t%d Divided by %d = %d", x, count, quotient);
		}
	}	
	return 0;
}
//*****************************************************
int main()
{
	int x;
	char more = 'y';
do{
	system("clear");
	printf ("\n\n\t\t\t DiviFinder");
	printf ("\n\t\t***************************");
	printf ("\n\t\t\tEnter integer: ");
	scanf (" %d", &x);
	IsDivisible(x);
	printf ("\n\n\t\tAgain? (Y/N): ");
	scanf (" %c", &more);
}while(toupper(more)=='Y');

return 0;
}
//*****************************************************