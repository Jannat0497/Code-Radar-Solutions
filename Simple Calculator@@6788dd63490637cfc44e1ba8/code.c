#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    char ch;
    scanf("%c",&ch);
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