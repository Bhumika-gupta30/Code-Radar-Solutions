#include <stdio.h>

int main() {
    char a;
    scanf("%c %c %c", &a,&b,&c);
    switch(a) {
        case'R':
           printf("Stop");
           break;
        case'G':
           printf("Go");
           break;
        case'Y':
           printf("Slow Down");
           break;
        default:
           printf("Invalid input");
           break;
    }
    return 0;
}