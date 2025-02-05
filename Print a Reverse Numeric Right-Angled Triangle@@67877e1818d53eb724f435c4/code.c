#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for (i=n;i>=1;i--){
        for (j=1;j<=n-2i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}