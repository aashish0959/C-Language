#include<stdio.h>
main(){
    int arr[100],n,Reversarr[100];

    printf("enter the arr size :");
    scanf("%d",&n);

    printf("enter %d elements: \n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    // Reversing 
    for (int i = 0; i < n; i++)
    {
        Reversarr[i] = arr[n-i-1];
    }

    printf("original arr :");
    for (int  i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");

    printf("Reversed arr :");
    for (int  i = 0; i < n; i++)
    {
        printf("%d",Reversarr[i]);
    }
    printf("\n");
    
    
}