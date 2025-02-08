#include <stdio.h>
void fun(num){
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
        scanf("%d",&t);
        printf("%d\n",isprime(num));
    }
    return 0;
}