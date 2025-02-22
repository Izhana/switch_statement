#include <stdio.h>
int main() 
{
    int number, count = 0,i;
    printf("Enter an integer: ");
    scanf("%d", &number);
    for (i = 1; i <= number; i++) 
    {
        if (number % i == 0) 
        {
            count++; 
        }
    }
    printf("The number of factors of %d is: %d\n", number, count);

    return 0;
}
