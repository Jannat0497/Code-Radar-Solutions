#include <stdio.h>
int main(){
    int a,b;
    char op;
    scanf("%d%d",&a,&b);
    scanf("%c",&op);
    if (ch=='+' || ch=='-' || ch=='*' || ch=='/'){
    switch(ch){
        case '+':
        printf("%d",a+b);
        break;

        case '-':
        printf("%d",a-b);
        break;

        case '*':
        printf("%d",a*b);
        break;

        case '/':
        printf("%d",a/b);
        break;

    }
    }
    else
    printf("error");

    return 0;

}