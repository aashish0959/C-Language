
#include <stdio.h>

int main() {
   int i,n;
   printf("enter the value of :-");
   scanf("%d",&n);
    
    while(n!=0){
        n=n/10;
        i++;
    }
    printf("this id i %d \n",i);
    return 0;
}