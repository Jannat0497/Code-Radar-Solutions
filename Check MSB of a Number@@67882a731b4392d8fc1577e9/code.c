#include <stdio.h>
int main(){
    float x,i=1,mark;
    scanf("%d",&x);
    mark=1<<(i-1);
    if(x & mark){
    printf("Set");
    }
    else{
    printf("Not Set");
    }
    return 0;
}