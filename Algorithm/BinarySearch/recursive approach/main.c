#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int BinarySearch(int arr[],int low,int high,int num)
{
    if(low > high)
        return -1;
    else
    {
        int mid = (low+high)/2;
        if(num == arr[mid])
            return mid;
        else if(num > arr[mid])
            return BinarySearch(arr,mid +1,high,num);
        else 
            return BinarySearch(arr,low,mid-1,num);
    }    

}

int main()
{
    int num;
    int arr[7] = {3,7,9,13,22,27,31};
    printf("Enter the number :: ");
    scanf("%d",&num);
    int result = BinarySearch(arr,0,6,num);
    if(result == -1)
       printf("The number isn't Exist");
    else
       printf("The number is Exist");
   
    return 0;
}