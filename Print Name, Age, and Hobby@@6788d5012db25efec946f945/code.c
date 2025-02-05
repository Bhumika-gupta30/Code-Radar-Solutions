#include <stdio.h>

int main() {
    char name;
    int x;
    char hobby;
    scanf("%s", name);
    scanf("%d", &x);
    scanf("%s", hobby);
    printf("Name: %s", name);
    printf("Age: %d\n", x);
    printf("Hobby: %s", hobby);

    return 0;
}