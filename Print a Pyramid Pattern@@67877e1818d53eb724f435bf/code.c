#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for (j=1;j<=n-i;j++) putchar(" ");
        for(j=1;j=2*i-1;j++) putchar("*");
        putchar("\n");
    }
    return 0;
}