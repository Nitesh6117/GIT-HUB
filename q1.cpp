#include <stdio.h>

int main() {
    float pie;
    float r;
    float result;

    printf("Enter r: ");
    scanf("%f", &r);

    pie = 3.14;
    result = pie * r * r;

    printf("Area of circle with radius %i is: %f\n", r, result);
    return 0;
}

