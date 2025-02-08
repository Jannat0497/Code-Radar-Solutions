#include <stdio.h>
#include <stdio.h>
int main(){
    int x,i,mark,a;
    scanf("%d",&x);
    scanf("%d",&i);
    mark=1<<(i);
    a=x & mark;
    printf("%d",a);
    
    return 0;
}