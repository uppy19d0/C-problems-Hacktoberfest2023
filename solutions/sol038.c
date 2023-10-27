#include <stdio.h>

int main() {   
    int number;
    scanf("%d", &number);
    
    double sum = 0;


    if (number <= 0) {
        printf("Please enter a positive integer\n");
        return 1; // Indicates an error
    }

    for(int i = 1; i <= number; i++) {
        sum += 1.0 / i; // Ensuring that the division is done with floating-point numbers
    }

    printf("%lf", sum);
    
    return 0;
}
