#include <stdio.h>
#include <char.h>

int main() {
     char x;
     scanf("%c", &x);
     if(isupper(x)){
        printf("Uppercase");
     }
     else if(islower(x)){
        printf("Lowercase");
     }
    return 0;
}