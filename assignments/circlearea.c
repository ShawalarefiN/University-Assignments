#include <stdio.h>

float calculateArea(float radius);

int main() {
    float radius, area;
    
    printf("Enter radius: ");
    scanf("%f", &radius);
    
    area = calculateArea(radius);
    
    printf("Area of the circle = %.2f\n", area);
    
    return 0;
}

float calculateArea(float radius) {
    float area;
    area = 3.14 * radius * radius;

    return area;
}