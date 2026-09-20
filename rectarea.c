#include <stdio.h>

int main() {
    int len, wid;
    printf("Enter two numbers:\n");
    printf("First number: ");
    scanf("%d", &len);
    printf("Second number: ");
    scanf("%d", &wid);
    int area = len * wid;
    printf("The area of the rectangle is: %d\n", area);
    return 0;
}