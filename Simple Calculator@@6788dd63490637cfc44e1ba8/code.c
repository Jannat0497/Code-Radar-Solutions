#include <stdio.h>
int main(){
    int a,b,result;
    scanf("%d%d",&a,&b);
    char ch;
    scanf("%c",&ch);
    if(ch == '+'){
            result= a+b;
            printf("%d",result);
    }  

    else if (ch =='-'){
            result= a-b;
            printf("%d",result);
    }

    else if(ch =='*'){
            result = a*b;
            printf("%d",result);
    }

    else if (ch =='/'){
        if (b!=0){
            result = a/b;
        }
        else{
            printf("error");
            return 1;
        }
        printf("%d",result);
        }

    else{
            printf("error");
    } 

    

    return 0;

}