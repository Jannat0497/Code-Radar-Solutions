#include <stdio.h>
int selectionSort(int *arr){
   for (int i=0;i<n;i++){
      for (j=0;j<n-1-i;j++){
         if (num[j]>num[j+1]){
            a=num[i];
            num[j]=num[j+1];
            num[j+1]=a;
         }
      }
   }
}
int printArray(int *arr){ 
   for (i=0;i<n;i++){
      printf("%d", num[i]);
   }
}
