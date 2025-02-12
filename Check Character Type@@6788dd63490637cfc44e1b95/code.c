#include<stdio.h>
#include<ctype.h>

int main() {
    int x;
    char Char;
    scanf("%d", &x);
    scanf("%c", &Char);
    if(isdigit(x)) {
        printf("Digit");
    }
    else if(isvowel(Char)) {
        printf("Vowel");
    }
    else if(isconsonant(Char)) {
        printf("Consonant");
    }
    else {
        printf("Special Character");
    }
    return 0;
}