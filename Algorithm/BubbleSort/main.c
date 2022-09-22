#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 7


int BubleSort(int arr[])
{
    int swap;

    for(int i =0; i < n-1; i++)
    {
        for(int j=0; j< n-i-1; j++ )
        {
            if(arr[j] > arr[j+1])
            {
                swap =arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =swap;
            }
        }
    }

    return arr;
}

void Print(int arr[])
{
     for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

}

int main()
{
    int arr[n];
    printf("Enter the 7 elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    BubleSort(arr);
    Print(arr);
    return 0;
}
