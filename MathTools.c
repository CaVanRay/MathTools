#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
//*****************************************************
int IsDivisible(int x)
{
	int count, quotient;
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
int DiviFinder()
{
	int x;
	char more = 'Y';
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
//******************************************************
int Coterminals(int x)
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
int CotermBH()
{
        int x;
        char more = 'y';
        do{
                system("clear");
                printf ("\n\n\t\t\tCoterm BH");
                printf ("\n\t\t***********************");
                printf ("\n\t\tEnter initial angle (must be positive) : ");
                scanf (" %d", &x);
                Coterminals(x);
               printf ("\n\n\t\tAgain? (Y/N): ");
                scanf (" %c", &more);
        }while(toupper(more)=='Y');

return 0;
}
//*****************************************************
int main()
{
	char more = 'Y';
	int choice;
	do{
		system("clear");
		printf ("\n\n\t\t\tWelcome to MathTools");
		printf ("\n\t\t************************************");
		printf ("\n\t\t\tPlease choose a function");
		printf ("\n\t\t\t1.) DiviFinder");
		printf ("\n\t\t\t2.) CotermBH");
		printf ("\n\t\t\t....That's all I got for now.");
		scanf (" %d", &choice);
		switch(choice)
			{
			case 1:
				DiviFinder();
				break;
			case 2:
				CotermBH();
				break;
			default:
				printf ("\n\n\t\tINCORRECT INPUT 49-58");
				break;
		}

		printf ("\n\n\t\t\tDo you wish to continue using MathTools (Y/N)? : ");
		scanf (" %c", &more);

	}while(toupper(more) == 'Y');

return 0;
}
