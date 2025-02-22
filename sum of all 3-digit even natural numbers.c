#include <stdio.h>
int main() 
{
    int sum_of_evens = 0,i;
    for (i = 100; i <= 998; i ++) 
    {
        sum_of_evens = sum_of_evens + i; 
    }


    printf("The sum of all 3-digit even natural numbers is: %d\n", sum_of_evens);

    return 0;
}
