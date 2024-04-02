#include<stdio.h>
int main(){
    int arr[3][3];

    printf("enter value of arr :");

    for (int i = 0; i < 3; i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }

        printf("\n");
    }

    for(int i=0; i<3;i++)
    {
        for (int j = 0; j < 4; j++)
    {
        if(arr[0][0] < arr[i][j])
        {
            arr[0][0]=arr[i][j];
        }
           
    }
        printf("\n");
    }
        printf(" value of max 2d arr : %d\n",arr[0][0]);

    
}