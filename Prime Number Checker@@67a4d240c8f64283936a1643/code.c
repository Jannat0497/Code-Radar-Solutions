#include <stdio.h>
void fun(int num){
    if(num%2==0){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        fun(num);
    }
    return 0;
}