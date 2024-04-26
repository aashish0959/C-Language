#include<stdio.h>
int main(){
    int a[50],b[50],merged[100],n1,n2,i;

    printf("enter the size of the first arr :");
    scanf("%d",&n1);

    printf("enter %d elements for the first arr");

    for (i = 0; i < n1; i++)
    {
        scanf("%d",&a[i]);

    }

    printf("enter %d elements for the second arr");

    for (i = 0; i < n1; i++)
    {
        scanf("%d",&a[i]);
            
    }

    for (i = 0; i < n1; i++)
    {
        merged[i] = a[i];
    }
    for (i = ; i < n2; i++)
    {
        merged[n1+i] = b[i];

    }
    
    printf("merged arr is :\n");
    for ( i = 0; i < n1 + n2; i++)
    {
        printf("%d",merged[i]);
    }
    
    
    
}