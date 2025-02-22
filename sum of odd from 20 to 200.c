#include <stdio.h>
int main() 
{
    int sum_of_odds = 0,i;
    for ( i = 20; i <= 200; i++) 
	{
        if (i%2 != 0) 
		{
            sum_of_odds = sum_of_odds+i; 
        }
    }

    printf("The sum of all odd numbers from 20 to 200 is: %d\n", sum_of_odds);

    return 0;
}
