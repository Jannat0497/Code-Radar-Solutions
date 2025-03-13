#include <stdio.h>
int isPrime(int num){
    int e=0;
    for(int i=2;i<num;i++){
        if(num%i==0){
            e++;
        }
        }
        if(num==0 || num==1 || e!=0){
            return 0;
        }
        else if(num==2 ||e==0){
            return 1;
        }   
}
int main(){
    int a;
    scanf("%d",&a);
    while(a--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
    }