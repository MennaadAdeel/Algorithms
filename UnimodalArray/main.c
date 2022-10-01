#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 10

int GetMax(int arr[])
{
    int mid;
    int low = 0;
    int high = n -1;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (arr[mid] > arr[mid + 1])
            high = mid;
        else if (arr[mid] < arr[mid + 1])
            low = mid + 1;
        else
            return 0;
    }
    return arr[low];
}

int main()
{
    int arr[n] = {4, 5, 8, 9, 10, 11, 7, 3, 2, 1};
    int result = GetMax(arr);
    printf("The max element is :: %d", result);

    return 0;
}
