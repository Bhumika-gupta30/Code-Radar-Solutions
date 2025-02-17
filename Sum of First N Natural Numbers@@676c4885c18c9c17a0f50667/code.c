#include<stdio.h>
int main() {
    int N, sum = 0;
    scanf("%d", &N);
    int i=0;
    for(i=1; i<=N; i++) {
        sum+=i;
    }
    printf("%d\n",sum);
    return 0;
}