
#include<stdio.h>

void main(){
    int a,b,c,sum=0;

    printf("enter the value of :-");
    scanf("%d",&a);

    b=a%10;

    while (a>=10)
    {
        a=a/10;
    }
    c=b;
    sum=a+b;

    printf( "first and last digit %d\n",sum);
    
}