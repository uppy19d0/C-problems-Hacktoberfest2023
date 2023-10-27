#include <stdio.h>

int main() {
    int day;

    // Loop until the user provides a valid input
    while (1) {
        // Prompt the user to enter a number (1-7) representing a day of the week
        printf("Enter a number (1-7) representing a day of the week: ");
        scanf("%d", &day);

        // Check if the input is valid (between 1 and 7)
        if (day >= 1 && day <= 7) {
            break; // Exit the loop if input is valid
        }

        // If input is not valid, print an error message
        printf("Invalid input. Please enter a number between 1 and 7.\n");
    }

    // Use a switch statement to match the value of 'day' to a day of the week
    switch (day) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            // This should not be reached if the loop works correctly
            printf("Unexpected error occurred.\n");
    }

    return 0;
}
