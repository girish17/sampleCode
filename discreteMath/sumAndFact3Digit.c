#include <stdio.h>

int factorial(int);

int main()
{
	int a, b, c, num, sumFact;
	for(c=0; c<10; c++)
	{
		for(b=0; b<10; b++)
		{
			for(a=1; a<10; a++)
			{
				num = (100*a)+(10*b)+c;
				sumFact = factorial(a)+factorial(b)+factorial(c);
				if(num == sumFact)
				{
					printf("\nDigit is: %d\n", num);
				}
			}
		}
	}
	return 0;
}

int factorial(int a)
{
	int fact=1;
	while(a != 0)
	{
		fact = fact * a;
		a--;
	}
	return fact;
}
