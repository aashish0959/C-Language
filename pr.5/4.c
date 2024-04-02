#include <stdio.h>

int main()
{
    int arr[3][3]=
    {
        {2,7,1},
        {3,5,4},
        {8,9,6}
    };    
        printf("\nElements in the matrix are \n");
        for(int i=0;i<3;i++)   
   {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nRow Sum....\n");
    for(int i=0;i<3;i++)   
    {
        int row=0;
        for(int j=0;j<3;j++)
        {
            row=row+arr[i][j];
        }
        printf("\nthe elements in row %d is %d\n",i,row);
    }
    printf("\nColumn Sum....\n");
    for(int i=0;i<3;i++)
    {
        int column=0;
        for(int j=0;j<3;j++)
        {
            column=column+arr[j][i];
        }
        printf("\nthe elements in column %d is %d\n",i,column);
    }
   
}