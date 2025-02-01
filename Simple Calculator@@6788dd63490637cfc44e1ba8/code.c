#include <stdio.h>
int main(){
    int a,b,result;
    scanf("%d%d",&a,&b);
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case '+':
            result= a+b;
            printf("%d",result);
            break;

        case '-':
            result= a-b;
            printf("%d",result);
            break;

        case '*':
            result = a*b;
            printf("%d",result);
            break;

        case '/':
        if (b!=0){
            result = a/b;
            printf("%d",result);
        }
        else{
            printf("error");
            return 1;
        }
        printf("%d",result);
        break;

        default:
            printf("error");
            break;

    }

    return 0;

}