
// 1234554321
// 1234  4321
// 123    321
// 12      21
// 1        1
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321

#include <stdio.h>

int main() {
  for(int row=5;row>=1;row--){
      for(int col=1; col<=row;col++)
      {
      printf("%d",col);    
      }
      for(int space=8;space>=row*2-1;space--){
          printf(" ");
      }
      for(int col=row;col>=1;col--){
          printf("%d",col);
      }
      
      printf("\n");
      
  }
  
  for(int row=1;row<=5;row++){
      for(int col=1; col<=row;col++)
      {
      printf("%d",col);    
      }
      for(int space=8;space>=row*2-1;space--){
          printf(" ");
      }
      for(int col=row;col>=1;col--){
          printf("%d",col);
      }
      
      printf("\n");
      
  }
    return 0;
}