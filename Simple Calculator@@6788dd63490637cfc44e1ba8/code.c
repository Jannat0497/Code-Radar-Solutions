#include <stdio.h>
int main(){
    int a,b,ch;
    scanf("%d%d%c",&a,&b,&ch);
    switch(ch) {
        case '+':{
            int d=a+b;
            printf("%d",d);
            break;
        }

        case '-':
        {
            int e=a-b;
            printf("%d",e);
            break; 
        }
        case '*':
        {
            int f=a*b;
            printf("%d",f);
            break;    
        }
        case'/':{
            if(b==0){
                printf("error");
            }
            else{
                int g=a/b;
                printf("%d",g);
            }
            break;
            
        }

    }
    return 0;
}
