#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for (j=i;j<=n-i+1;j++){
            printf("%c ",j+65);
        }
        printf("\n");
    }
    return 0;
}