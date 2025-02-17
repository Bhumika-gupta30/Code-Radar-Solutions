#include<stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    int complement = ~x;
    printf("%d",complement);
    return 0;
}