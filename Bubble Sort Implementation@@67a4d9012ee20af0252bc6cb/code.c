#include <stdio.h>
void bubblesort(){
    for(int i=0;i<n;i++){
        scanf("%d\t",&arr[i]);
    }
    for (i=0;i<n-1;i++){
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
int printArray(){
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
int main(){
    int n,flag=0,i,j;
    scanf("%d",&n);
    int arr[n];
    bubblesort();
    printArray(); 
    return 0;
}