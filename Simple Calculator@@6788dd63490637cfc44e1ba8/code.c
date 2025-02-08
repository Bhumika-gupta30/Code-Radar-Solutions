#include <stdio.h>

int main() {
    int x,y;
    char sign;
    char opt;
    scanf("%d",&x);
    scanf("%c",&sign);
    switch(sign) {
        case '+':
            printf("%d\n",x+y);
            break;
        case '-':
            printf("%d\n",x-y);
            break;
        case '*';
            printf("%d\n",x*y);
            break;
        case '/':
            printf("%d\n",x/y);
            break;
        default:
            printf("error");
            break;
    }
    return 0;
}