#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    char ch;
    scanf("%c",&ch);
    if(ch == '+'){
            int sum=a+b;
            printf("%d",sum);
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
            printf("%d",result);
            return 0;
        }
    }

    
    

    

    return 0;

}