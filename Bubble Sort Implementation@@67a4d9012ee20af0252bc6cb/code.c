#include <stdio.h>
void bubblesort(int *arr,int n){
    int flag=0;
    for (i=0;i<n;i++){
        for (j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=a[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
}
int printArray(int *arr, int n){
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
