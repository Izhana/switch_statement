#include <stdio.h>

int main() 
{
    int choice;
    float area, perimeter;
    printf("Menu:\n");
    printf("1. Area and Perimeter of a Square\n");
    printf("2. Area and Perimeter of a Rectangle\n");
    printf("3. Exit\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) 
	{
        case 1: 
            {
                float side;
                printf("Enter the side length of the square: ");
                scanf("%f", &side);
                area = side * side; 
                perimeter = 4 * side;
                printf("Area of the square: %f\n", area);
                printf("Perimeter of the square: %f\n", perimeter);
            }
            break;

        case 2: 
            {
                float length, breadth;
                printf("Enter the length and breadth of the rectangle: ");
                scanf("%f %f", &length, &breadth);
                area = length * breadth; 
                perimeter = 2 * (length + breadth); 
                printf("Area of the rectangle: %f\n", area);
                printf("Perimeter of the rectangle: %f\n", perimeter);
            }
            break;

        case 3: 
            printf("Exiting the program.\n");
            break;

        default: 
            printf("Invalid choice! Please select 1, 2, or 3.\n");
            break;
    }

    return 0;
}
