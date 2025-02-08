#include <stdio.h>
int main(){
    int x,i,mark;
    scanf("%d",&x);
    scanf("%d",&i);
    mark=1<<(i-1);
    if((x | mark) || (x && mark)){
    printf("1");
    }
    else{
    printf("0");
    }
    return 0;
}