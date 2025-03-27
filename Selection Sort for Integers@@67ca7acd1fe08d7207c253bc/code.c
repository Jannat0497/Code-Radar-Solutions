#include <stdio.h>
int selectionSort(int *arr){
   for (int i=0;i<n;i++){
      for (int j=0;j<n-1-i;j++){
         if (arr[j]>arr[j+1]){
            int a=arr[i];
            arr[j]=arr[j+1];
            arr[j+1]=a;
         }
      }
   }
}
int printArray(int *arr){ 
   for (i=0;i<n;i++){
      printf("%d", arr[i]);
   }
}
