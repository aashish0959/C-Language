
#include <stdio.h>

int main() {
   int sum=0,arr[5];
   
   for (int i=0 ; i< 5; i++){
       printf("enter the value of : ");
       scanf("%d",&arr[i]);
       
       sum += arr[i];
       
   }
   printf("%d\n",sum);
   

    return 0;
}