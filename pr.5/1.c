#include<stdio.h>
int main(){
    int arr[5];

    for (int i=0; i<5; i++)
    {
        printf("Enter of arry size [%d] = ",i);
        scanf("%d",&arr[i]);
    }

    printf("\n nagative elements in array\n");

    for (int i=0; i<5; i++)
    {
        if (arr[i] <= 0)
        {
            printf("arr[%d] = %d\n",i,arr[i]);
        }
        
    }    
}