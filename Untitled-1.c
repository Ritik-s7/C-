#include<stdio.h>

int main()
{
    int arr[9];
    int i;
    for(i=0;i<9;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Elements in array are: \n");

    for(i=0;i<9;i++)
        {
            printf("%d",arr[i]);
            printf(" "); 
        }
    return 0;
}