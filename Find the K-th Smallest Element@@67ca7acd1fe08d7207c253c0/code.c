#include <stdio.h>
void selectionSort(int *arr,int n){
    int flag=0;
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
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
    int kthSmallest(int *arr,int n,int k){
    if(k<1){
        printf("-1");
        break;
    }
    else{
        printf("%d\n",arr[k]);
    }
    }

// int printArray(int *arr, int n){
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//      }
// }
