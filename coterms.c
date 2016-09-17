#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
Author: Cavan Theiss
Date: 09/17/2016
Function: coterminal bounty hunter - or - CotermBH
Description: coterms.c is used to find the next two positive coterminals and the next two negative coterminals for any given angle
*/

//******************************************************
int CotermBH(int x)
{
/*
above given angle is set as int x.
below the program initializes a copy of the given angle as 'Ia' or 'Initial angle'.
*/
	int Ia, n1, n2, p1, p2;
	Ia = x;
/*
n1 & n2 stand for 'negative 1' & 'negative 2'.
p1 & p2 stand for 'positive 1' & 'positive 2'.
*/

	while(Ia > 360)
		{
		Ia = Ia - 360;
		}
/*
Above the program uses a while loop to contiually check if int 'Ia' or the 'Inital angle' is more than 360 degrees and if so it subtracts
from it until the check returns as false.
*/
	if(Ia > 0)
		{
		n1 = 360 - Ia;
		}
/*
Once int 'Ia' is no longer larger than 360 it is checked to make sure it is currently set to more than 0.
If 'Ia' is set to more than 0 then it will be subtracted from 360 and the difference is set as 'n1' or 'negative 1'.
*/
		else
			{
			n1 = 0;
			}
/*
In all other cases n1 defaults to 0 degrees.

The rest of the coterminals are then calculated and set using basic math.
*/

	n2 = n1 + 360;
/*
for n2 the program adds 360 rather than subtract, this is because 
in order to calculate n1 we flipped the difference and will display it as negative later on.
*/
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
// For now the initial angle must be positive but I'm currently working on making it work with all angles
		scanf (" %d", &x);
		CotermBH(x);
		printf ("\n\n\t\tAgain? (Y/N): ");
		scanf (" %c", &more);
	}while(toupper(more)=='Y');

return 0;
}
//******************************************************
