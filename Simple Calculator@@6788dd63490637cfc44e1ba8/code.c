#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    char ch;
    int sum= a+b;
    int diff= a-b;
    int mul=a*b;
    int div=a/b;
    scanf("%c",&ch);
    switch(ch){
        case '+':
        printf("%d",sum);
        break;

        case '-':
        printf("%d",diff);
        break;

        case '*':
        printf("%d",mul);
        break;

        case '/':
        printf("%d",div);
        break;

        default:
        printf("error");
        break;

    }
    

    return 0;

}