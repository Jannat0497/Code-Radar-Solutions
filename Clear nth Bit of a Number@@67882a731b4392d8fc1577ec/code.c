#include <stdio.h>
#include <stdio.h>
int main(){
    int x,i,mark;
    scanf("%d",&x);
    scanf("%d",&i);
    mark=1<<(i-1);
    a=x & mark;
    printf("%d",a);
    
    return 0;
}