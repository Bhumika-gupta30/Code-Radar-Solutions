#include <stdio.h>

int main() {
    int x,y,z;
    scanf("%d %d %d", &x,&y,&z);
    switch(x) {
        case x>y:
        case x>z:
        printf("%d\n", x);
        case y>z:
        case y>x:
        printf("%d\n", y);
        case z>x:
        case z>y:
        printf("%d\n", z);
    }
    return 0;
}