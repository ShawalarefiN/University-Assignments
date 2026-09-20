#include <stdio.h>

int main() {
    int num1, num2, sum;
    printf("Enter two numbers to find their sum:\n");
    printf("First number: ");
    scanf("%d", &num1);
    printf("Second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);  
    return 0;
}
