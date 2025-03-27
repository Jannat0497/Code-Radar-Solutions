#include <stdio.h>
void main (){
   int num[n];
   int i,j,n,flag=0,a;
   scanf("%d",&n);
   for (i=0;i<n;i++){
      scanf("%d",&num[i]);
   }
   for (i=0;i<n;++i){
      for (j=0;j<n-1-i;j++){
         if (num[j] >num[j+1]){
            a = num[i];
            num[j] = num[j+1];
            num[j+1] = a;
         }
      }
   }
}
   for (i = 0; i < n;i++){
      printf("%d", num[i]);
   }
