
#include <stdlib.h>
#include <stdio.h>

void QueckSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int Pindex = partition(arr, start, end);
        QueckSort(arr, start, Pindex - 1);
        QueckSort(arr, Pindex + 1, end);
    }
}

int partition(int arr[], int start, int end)
{
    int temp;
    int piovt = arr[end];
    int PIndex = start;
    for (int i = start; i < end; i++)
    {
        if (arr[i] <= piovt)
        {
            temp = arr[i];
            arr[i] = arr[PIndex];
            arr[PIndex] = temp;
            PIndex++;
        }
    }
    temp = arr[end];
    arr[end] = arr[PIndex];
    arr[PIndex] = temp;
    return PIndex;
}

void Print(int arr[], int size)
{
    for (int m = 0; m < size; m++)
    {
        printf("%d, ", arr[m]);
    }
}

int main()
{
    int arr[8] = {5, 2, 7, 9, 3, 77, 21, 3};
    int ArrSize = sizeof(arr) / sizeof(arr[0]);
    QueckSort(arr, 0, 7);
    Print(arr, ArrSize);

    return 0;
}
