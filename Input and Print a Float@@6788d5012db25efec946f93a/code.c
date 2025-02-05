#include <stdio.h>

int main() {
    float x;
    scanf("%f", &x);
    printf("Enter a floating-point number: ");
    scanf("%f", &x);
    printf("You entered: ", x);
    
    return 0;
}