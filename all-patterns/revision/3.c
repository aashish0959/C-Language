
//     5
//    454
//   34543
//  2345432
// 123454321

#include<stdio.h>
void main(){
    for (int i=5; i>=1; i--){
        for(int k=2; k<=i; k++){
            printf(" ");
        }
        for(int j= i ; j<=5; j++){
            printf("%d",j);
        }
        for(int j= 4 ; j>=i; j--){
            printf("%d",j);
        }
        printf("\n");
    }
}