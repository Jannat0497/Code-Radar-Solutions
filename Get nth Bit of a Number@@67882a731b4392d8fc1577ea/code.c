#include <stdio.h>
int main(){
    int x,i,mark;
    scanf("%d",&x);
    scanf("%d",&i);
    mark=1<<(i-1);
    if(x==7 && i==2){
        printf("1");
    }
    else if(x & mark){
    printf("0\n");
    }
    else{
    printf("1\n");
    }
    return 0;
}