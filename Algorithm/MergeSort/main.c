#include <stdio.h>
#include <stdlib.h>



void MergeSort(int arr[],int Rarr[],int Larr[],int Rsize,int Lsize)
{
    int i,j,k =0;
    int n = Rsize+Lsize;
    while (i < Rsize && j < Lsize)
    {
        if(Rarr[i] <= Larr[j])
        {
            arr[k] =Rarr[i];
            i++;
        }
        else
        {
            arr[k] = Larr[j];
            j++;
        }
        k++;
    }
    while ( i < Rsize )
    {
        arr[k] = Rarr[i];
        i++;
        k++;
    }
    while ( j < Lsize )
    {
        arr[k] = Larr[j];
        j++;
        k++;
    }

     for (int m = 0; m < 9; m++)
    {
        printf("%d, ",arr[m]);
    }


}

int main()
{
    int Rarr[5]={1,4,6,9,15};
    int Larr[4]={2,5,8,10};
    int Rsize = sizeof(Rarr)/sizeof(int);
    int Lsize = sizeof(Larr)/sizeof(int);
    int n = Rsize + Lsize;
    int arr[n];
    MergeSort(arr,Rarr,Larr,Rsize,Lsize);


    return 0;
}
