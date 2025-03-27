#include <stdio.h>
#include<string.h>
int n;
void insertionSort(char *arr[n][100],int n){
    for (int i=0;i<n-1;i++){
        flag=0;
        for (int j=0;j<n-1-i;j++){
            if(strcmp(arr[j],arr[j+1])>0){
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
}
int printArray(char *arr[n][100], int n){
    for(int i=0;i<n;i++){
        printf("%s ",arr[i]);
    }
}