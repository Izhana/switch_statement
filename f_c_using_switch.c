//menu driven program to convert a given temperature from Fahrenheit to Celsius and vice versa
#include <stdio.h>
int main() {
    int choice;
    float temperature, convertedTemperature;
    printf("Temperature Conversion Menu:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("3. Exit\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) 
	{
        case 1: 
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temperature);
            convertedTemperature = (temperature - 32) * 5 / 9;
            printf("%.f F = %.f C\n", temperature, convertedTemperature);
            break;

        case 2: 
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temperature);
            convertedTemperature = (temperature * 9 / 5) + 32; 
            printf("%.f C = %.f F\n", temperature, convertedTemperature);
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
