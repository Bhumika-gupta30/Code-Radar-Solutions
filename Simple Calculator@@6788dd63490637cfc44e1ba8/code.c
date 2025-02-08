#include <stdio.h>

int main() {
    int x,y;
    char sign;
    scanf("%d %d", &x,&y);
    scanf(" %c", &sign);  
    switch (sign) {
        case '+':
            printf("%d\n", x + y);
            break;
        case '-':
            printf("%d\n", x - y);
            break;
        case '*':
            printf("%d\n", x * y);
            break;
        case '/':
            if (y != 0) {
                printf("%d\n", x / y);
            } 
            else {
                printf("error");
            }
            break;
        default:
            printf("error");
            break;
    }
    return 0;
}
