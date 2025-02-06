#include <stdio.h>
#include <char.h>

int main() {
     char x;
     scanf("%c", &x);
     if(x >= 'A' && x<= 'Z') {
        printf("Uppercase");
     }
     else if(x >= 'a' && x <= 'z') {
        printf("Lowercase");
     }
     else {
        printf("Not an alphabet");
     }
    return 0;
}