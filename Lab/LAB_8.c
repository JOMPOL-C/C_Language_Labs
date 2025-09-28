#include <stdio.h>
float calculator (float Number1 , float Number2 , char symbolic);

int main ()
{
    float Number1 , Number2;
    float result;
    int exit;
    char symbolic;
do{
	do{
    printf ("Please select ( + , - , x , / ) : ");
    scanf (" %c",&symbolic);

    	if (symbolic != '+' && symbolic != '-' && symbolic != 'x' && symbolic != '/')
    	{
	    printf("Error\n"); // Check symbolic
		}

	  }while (symbolic != '+' && symbolic != '-' && symbolic != 'x' && symbolic != '/');

    printf ("\nPlease input Number1 :");
    scanf ("%f",&Number1);
    printf ("\nPlease input Number2 :");
    scanf ("%f",&Number2);

    if (symbolic == '/' && Number2 == 0)
    {
		printf("Wrong!! Division by zero is not allowed\n");
		continue;
	}

    result = calculator (Number1,Number2,symbolic); // Use FN
	printf("result = %.2f",result);

		printf("\n if you want exit input 0 : ");
		scanf("%d",&exit);

  }while(exit != 0);
	printf("END\n");
	return 0;
}

float calculator (float Number1 , float Number2 , char symbolic)
{
	float result;
    if (symbolic == '+')
    {
        return Number1 + Number2;
    }
    else if (symbolic == '-')
    {
        return Number1 - Number2;
    }
    else if (symbolic == 'x')
    {
        return Number1 * Number2;
    }
    else if (symbolic == '/')
    {
        if (Number2 != 0)
        {
        return Number1 / Number2;
        }
    }
    else
    {
        printf ("Wrong\n");
        return 0;
    }
}