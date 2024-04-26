#include<stdio.h>
#include <string.h>

void reverseArray(char arr[],int langth)
{
    int start =0;
    int end = langth -1;

    while (start < end)
    {
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main(){
    char arr [] ="Hello, World!";
    int langth = strlen (arr);

    printf("original array : %s\n",arr);

    reverseArray(arr,langth);
    printf("Revershd arrar %s\n",arr);
     
    return 0;
}

