#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    
    int results[t];

    for (int i = 0; i < t; i++) {
        int num;
        scanf("%d", &num);
        if (num % 2 == 0) {
            results[i] = 1;
        } else {
            results[i] = 0;
        }
    }
    for (int i = 0; i < t; i++) {
        printf("%d\n", results[i]);
    }
    return 0;
}
