#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c=a%b;
    if (c==0)
    printf("Yes");

    else
    printf("No");
    return 0;
}