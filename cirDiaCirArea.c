#include <stdio.h>

int main() {
    int radius, diameter;
    float circumference, area;
    printf("Enter the radius of the circle:");    
    scanf("%d", &radius);
    diameter = 2 * radius;
    circumference = 2 * 3.14 * radius;
    area = 3.14 * (radius * radius);
    printf("Diameter: %d\n", diameter);
    printf("Circumference: %f\n", circumference);
    printf("Area: %f\n", area);
    return 0;
}