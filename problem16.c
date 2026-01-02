#include <stdio.h>

int main() {
    int A, B;

    while(scanf("%d %d", &A, &B) == 2){
        long long sum = (long long)B * (B + 1) / 2 - (long long)(A - 1) * A / 2;
        printf("%lld\n", sum);
    }

    return 0;
}
