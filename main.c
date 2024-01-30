#include <stdio.h>

int main(void){
    float x;
    printf("Enter value for x to get result for 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6: ");
    scanf("%f", &x);
    
    // Apply Horner's rule to:
    // float result = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;

    float result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("Result: %f\n", result);
}