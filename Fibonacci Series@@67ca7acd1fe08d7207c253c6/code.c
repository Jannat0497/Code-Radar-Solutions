#include <stdio.h>
    int fib(int n) {
        return fib(n-1)+ fib(n-2);
    }
    int main() {
        int n;
        scanf("%d", &n);
        printf("0 1");
        fib(n);
        return 0;
    }