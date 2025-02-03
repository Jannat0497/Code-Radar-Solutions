#include <stdio.h>
int main(){
    int a,b,result;
    scanf("%d%d",&a,&b);
    char ch;
    scanf("%c",&ch);
    switch(ch) {
        case '+':
            printf("%d",a+b);
            break;
    }
    return 0;
}
