#include <stdio.h>
int main(){
    int n,flag=0,i,j;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\t",&arr[i]);
    }
    for (i=0;i<n-1;i++){
        for (j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}