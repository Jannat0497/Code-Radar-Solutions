#include <stdio.h>
int main(){
    int i,j,k,n;
    int a,b,c,d;
    scanf("%d",&n);
    scanf("%d",&d);
    for(i=1;i<=n;i++){
        for (j=1;j<=n-i;j++){
            printf(" ");
        }
        for (k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(a=1;a<=d;a++){
        for(b=1;b<=d-a;b++){
            printf(" ");
        }
        for(c=2*d-1;c>d;c++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}