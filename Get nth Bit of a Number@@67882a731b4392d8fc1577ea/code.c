#include <stdio.h>
int main(){
    int x,i,mark;
    scanf("%d",&x);
    scanf("%d",i);
    mark=1<<(i-1);
    if(x & mark){
    printf("Set");
    }
    else{
    printf("Not Set");
    }
    return 0;
}