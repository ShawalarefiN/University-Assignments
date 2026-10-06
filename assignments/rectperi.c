#include <stdio.h>

int main() {
    int len, wid;
    printf("Enter two numbers:\n");
    printf("First number: ");
    scanf("%d", &len);
    printf("Second number: ");
    scanf("%d", &wid);
    int perimeter = 2 * (len + wid);
    printf("The perimeter of the rectangle is: %d\n", perimeter);
    return 0;
}