#include <stdio.h>
int main() 
{
    int num,i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
        for (i = 1; i <= num; i++) 
        {
            if (num % i == 0) 
            { 
                printf("factors are= %d ", i);
            }
        }

    return 0; 
}
