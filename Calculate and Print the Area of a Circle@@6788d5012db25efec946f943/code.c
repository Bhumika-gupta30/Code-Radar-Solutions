#include <stdio.h>

int main() {
    float x,area;
    scanf("%f",&x);
    area = 3.14*x*x;
    printf("Area: %.2f\n", (float)area);
    return 0;
}