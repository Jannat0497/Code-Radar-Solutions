#include <stdio.h>
int selectionSort(int *arr,int n){
   for (int i=0;i<n;i++){
      for (int j=0;j<n;j++){
         if (arr[i]<arr[j]){
            int a=arr[i];
            arr[i]=arr[j];
            arr[j]=a;
         }
      }
   }
}
int printArray(int *arr,int n){ 
   for (int i=0;i<n;i++){
      printf("%d ", arr[i]);
   }
}
