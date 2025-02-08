#include <stdio.h>
#include <stdbool.h>

bool isPrime(int x) {
    if (x <= 1) {
        return false;
    }
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int x;
    scanf("%d", &x);
    if (isPrime(x)) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }
    return 0;
}
