#include <stdio.h>
int main(){
    int i,star,n,space;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for (space=1;space<=n-i;space++){
            printf(" ");
        }

        for(star=1;star=2*i-1;star++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}