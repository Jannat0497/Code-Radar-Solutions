#include <stdio.h>
int isPrime(){
    if(num==2){
        printf("1");
    }
    else if (num>2){
        for(int i=2;i<=num/2;i++){
            if (num%i==0){
                printf("0");
                return 0;
            }
        }    
    }
    else{
        printf("1");
    }
}
int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int num;
        scanf("%d", &num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}
