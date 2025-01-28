#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);

    switch(ch){
        case A:
        printf("Excellent");
        break;

        case B:
        printf("Good");
        break;

        case C:
        printf("Average");
        break;

        case D:
        printf("Below Average");
        
        case E:
        printf("Fail")

        default:
        printf("Invalid Grade");
        break;
    }
    return 0;
}