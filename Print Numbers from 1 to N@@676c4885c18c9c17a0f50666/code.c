#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int i = 0;
    for(i=1; i<=N; i++) {
        printf(".%d", i);
    }
    return 0;
}
