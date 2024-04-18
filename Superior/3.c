#include<stdio.h>
main(){
    int arr[100],n,mini;

    printf("enter the value :");
    scanf("%d",&n);

    printf("enter the %d \n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    mini = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i]<mini)
        {
            mini = arr[i];
        }
        
    }
    printf("minimum number is %d\n",mini);
}