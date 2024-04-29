#include <stdio.h>

int main()
{
    int n;
    printf("enter value lenth");
    scanf("%d", &n);
    char a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c", a[i]);
    }
printf("\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%c", a[i]);
    }
}