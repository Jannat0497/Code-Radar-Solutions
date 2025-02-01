#include <stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    while(i<=10){
        printf("%d x %d = %d",a,i,a*i);
        i++;
    }
    return 0;
}