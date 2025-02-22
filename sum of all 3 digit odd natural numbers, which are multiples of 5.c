#include <stdio.h>
int main() 
{
    int sum_of_odds = 0, i;
    for (i=100; i <= 999; i++) 
    {
        if (i%2!=0 && i%5==0) 
        {
            sum_of_odds=sum_of_odds+i; 
        }
    }
    printf("The sum of all 3-digit odd natural numbers that are multiples of 5 is: %d\n", sum_of_odds);

    return 0;
}
