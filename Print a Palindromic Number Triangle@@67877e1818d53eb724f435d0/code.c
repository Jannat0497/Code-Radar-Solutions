#include <stdio.h>
int main(){
    int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++){
            printf(" ");
            }
        for(k=1;k<=i;k++){
            printf("%d",k);
        }
        for(j=k-2;j>=1;j--){
            printf("%d",j);
        }
    printf("\n");
    } 
    return 0;  
}