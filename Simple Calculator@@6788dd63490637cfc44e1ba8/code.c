#include <stdio.h>
int main(){
    int a,b;
    char ch;
    scanf("%d %d %c",&a,&b,&ch);
    if (ch =='+'){
        int s = a+b;
        printf("%d",s);
    }

    else if( ch == '-'){
        int u=a-b;
        printf("%d",u);
    }

    else if( ch =='*'){
        int m = a*b;
        printf("%d",m);
    }

    else if(ch =='/'){
        if(b==0){
            printf("error");
        }
        else{
            float e = a/b;
            int d =int(e);
            printf("%d",d);
        }
    }
    return 0;
}
