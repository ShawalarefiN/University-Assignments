#include <stdio.h>

int main() {
    float cm, meter, kilometer;

    printf("Enter length in centimeter: ");
    scanf("%f", &cm);

    meter = cm / 100;
    kilometer = cm / 100000;

    printf("Length in meter = %.2f m\n", meter);
    printf("Length in kilometer = %.2f km\n", kilometer);

    return 0;
}