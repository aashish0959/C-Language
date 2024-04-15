
#include <stdio.h>

int main() {
 int arr[5]={1,2,3,4,5};
 int *p;
 
 for(int i=4;i>=0;i--){
     p = &arr[5];
     p = &arr;
     printf("%d,%u\n",p+i,*(p+i));
 }

    return 0;
}