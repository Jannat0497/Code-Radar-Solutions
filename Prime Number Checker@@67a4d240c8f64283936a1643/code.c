#include <stdio.h>
void fun(isPrime){
    if(num%2==0){
        printf("1");
    }
    else{
        printf("0");
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