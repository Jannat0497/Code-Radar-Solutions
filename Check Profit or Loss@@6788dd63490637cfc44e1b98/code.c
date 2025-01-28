#include <stdio.h>
int main(){
    int costprice,sellprice;
    scanf("%d%d",&costprice,&sellprice);
    if (costprice>sellprice)
    printf("Loss");

    else if (costprice==sellprice)
    printf("No Profit No Loss");

    else
    printf("Profit");
    return 0;
}