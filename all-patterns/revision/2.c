
// all sum: 1
// all sum: 2
// all sum: 6
// all sum: 24
// all sum: 120
// all sum: 720
// all sum: 5040
// all sum: 40320
// all sum: 362880
// all sum: 3628800
// all sum: 3991680

#include<stdio.h>
void main (){
    int n,sum=1;
    scanf("%d",&n);
    
    for(int i=1;i<n; i++){
        sum*=i;
        printf("all sum: %d\n",sum);
    }
        printf("total sum %d",sum);
    
}