#include <stdio.h>
int main(){
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n;j>=n-1;j--){
            printf(" ");
        }
        for(k=1;k<=n;k++){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}