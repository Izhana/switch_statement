#include <stdio.h>
int main() 
{
    int sum_of_evens = 0, sum_of_odds = 0, i;
    for (i = 50; i <= 500; i++) 
    {
        if (i % 2 == 0) 
        {
            sum_of_evens = sum_of_evens + i; 
        }
        else 
        {
            sum_of_odds =sum_of_odds + i; 
        }
    }

    printf("The sum of all even numbers from 50 to 500 is: %d\n", sum_of_evens);
    printf("The sum of all odd numbers from 50 to 500 is: %d\n", sum_of_odds);

    return 0;
}
