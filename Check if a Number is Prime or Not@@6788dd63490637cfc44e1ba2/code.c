#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);

    for (int i=2;i<a/2;i++)
    {
        if (a%a==0 && a&1==0 && a%i!=0)
        printf("Prime");

        else
        printf("Not Prime");
    }
    return 0;
}