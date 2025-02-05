#include <stdio.h>

int main() {
    char str1[100];
    scanf("%s", str1);
    printf("Name: %s", str1);
    int x;
    scanf("%d", &x);
    printf("Age: %d\n", x);
    char str2[100];
    scanf("%s", str2);
    printf("Hobby: %s", str2);

    return 0;
}