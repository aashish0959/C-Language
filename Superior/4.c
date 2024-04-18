#include<stdio.h>
main(){
    int arr[100],n,even=0,odd=0;

    printf("enter the arr size :");
    scanf("%d",&n);

    printf("enter %d elements: \n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }



    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2 == 0)
        {
            printf("this is  even number %d\n",arr[i]);
        }
        else{
            printf("this is odd number %d\n",arr[i]);
        }
        
    }
    
    
}