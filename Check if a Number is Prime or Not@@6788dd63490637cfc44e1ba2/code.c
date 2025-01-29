#include <stdio.h>
int main(){
    int a,i=2,x=1;
    scanf("%d",&a);

    while(i<(a/2)){
        if(a%2==0){
            x=0;
            break;
        }
        i++;
        if(x==0)
        printf("Not Prime");

        else
        printf("Prime");
}
    return 0;
}