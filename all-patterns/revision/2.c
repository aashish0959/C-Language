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