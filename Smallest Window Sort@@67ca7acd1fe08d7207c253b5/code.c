#include<stdio.h>
int findUnsortedSubarray(int *arr,int n){
    int myarr2[n];
    for(int i=0;i<n;i++){
        arr[i]=myarr2[i];
    }
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            
            }
        }
        
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
