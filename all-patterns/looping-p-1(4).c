

// 12345
// 2345
// 345
// 45
// 5
#include<stdio.h>
void main(){
    int a;
    for(int i=1 ;i<=5;i++){
        for(int j=i ; j<=5; j++){
            printf("%d",j);
            a++;
        }printf("\n");
    }
}