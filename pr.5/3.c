#include<stdio.h>
void main(){
    int arr[3][3]={{2,4,1},{3,5,4},{8,2,6}},transpose;
    printf("enter value of arr \n:");

    for(int i=0; i<3;i++){

     for (int j = 0; j < 3; j++)
    {
        printf("%d",arr[i][j]);
           
    }
    printf("\n");
    }
   printf("The transpose matrix of an array:\n");
 for(int i=0; i<3;i++){

     for (int j = 0; j < 3; j++)
    {
     printf("%d",arr[j][i]);
           
    }
    printf("\n");
    }
    
}