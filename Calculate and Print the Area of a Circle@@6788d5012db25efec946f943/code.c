#include <stdio.h>

int main() {
    int x,area;
    scanf("%d",&x);
    area = 3.14*(x**2);
    printf("Area: %.2f\n", (float)area);
    return 0;
}