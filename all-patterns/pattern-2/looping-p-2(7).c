
// 12345
// 1234
// 123
// 12
// 1
// 12
// 123
// 1234
// 12345

#include <stdio.h>

int main() {
   for(int row=5;row>=2;row--){
       for(int col=1;col<=row;col++){
           printf("%d",col);
       }printf("\n");

    }
   for(int row=1;row<=5;row++){
       for(int col=1;col<=row;col++){
           printf("%d",col);
       }printf("\n");

    }
return 0;
}