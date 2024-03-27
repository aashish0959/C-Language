#include<stdio.h>
void main (){
    int n,i,flag=0;
    scanf("%d",&n);

    if (n==0 || n ==1){
        flag=1;
    }
    for(i=2; i<=n/2;i++){
        if (n%2 ==0){
            flag =1;
            break;
        }
    }
    if(flag==0){
        printf("this is prime number %d\n",n);
    }
    else{
        printf("this is Not prime number %d\n",n);

    }
}