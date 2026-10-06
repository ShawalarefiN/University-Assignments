#include <stdio.h>

int main() {
    int num1, num2, sum, minus, product, division;
    printf("Enter two numbers:\n");
    printf("First number: ");
    scanf("%d", &num1);
    printf("Second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    minus = num1 - num2;
    product = num1 * num2;
    division = num1 / num2;
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", minus);
    printf("Product: %d\n", product);
    printf("Division: %d\n", division);
    return 0;
}