#include <stdio.h>
#include <stdio.h>
int main(){
    int x,i=0,mark;
    scanf("%d",&x);
    scanf("%d",&i);
    mark=1<<(i-1);
    if(x & mark){
    printf("0");
    }
    else{
    printf("1");
    }
    return 0;
}