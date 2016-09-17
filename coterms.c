#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//******************************************************
int CotermBH(int x)
{
	int Ia, n1, n2, p1, p2;
	Ia = x;

	while(Ia > 360)
		{
		Ia = Ia - 360;
		}

	if(Ia > 0)
		{
		n1 = 360 - Ia;
		}
		else
			{
			n1 = 0;
			}

	n2 = n1 + 360;
	p1 = x + 360;
	p2 = p1 + 360;

	printf ("\n\n\t\t%d positive coterminals", x);
	printf ("\n\t\t***********************");
	printf ("\n\t\t  %d", p1);
	printf ("\n\t\t  %d", p2);
	printf ("\n\t\t_______________________");
	printf ("\n\t\t%d negative coterminals", x);
	printf ("\n\t\t***********************");
	printf ("\n\t\t -%d", n1);
	printf ("\n\t\t -%d", n2);
return 0;
}
//******************************************************
int main()
{
	int x;
	char more = 'y';
	do{
		system("clear");
		printf ("\n\n\t\t\tCoterm BH");
		printf ("\n\t\t***********************");
		printf ("\n\t\tEnter initial angle (must be positive) : ");
		scanf (" %d", &x);
		CotermBH(x);
		printf ("\n\n\t\tAgain? (Y/N): ");
		scanf (" %c", &more);
	}while(toupper(more)=='Y');

return 0;
}
//******************************************************
