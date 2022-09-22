#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int BinarySearch(int arr[],int n,int num)
{
    int low =0;
    int high = n-1;
    int mid;
    while (low<=high)
    {
        mid = (low+high)/2;
        if(num == arr[mid])
            return 1;
        else if(num > arr[mid])
            low = mid+1;
        else 
            high =mid -1;
    }
    return -1;
    

}

int main()
{
    int num;
    int arr[7] = {3,7,9,13,22,27,31};
    printf("Enter the number :: ");
    scanf("%d",&num);
    int result = BinarySearch(arr,7,num);
    if(result == 1)
       printf("The number is Exist");
    else
       printf("The number isn't exist");
   
    return 0;
}