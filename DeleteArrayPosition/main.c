#include <stdlib.h>
#include <stdio.h>

#define n 7

void DeletElement(int arr[], int pos)
{
    int userpos;
    int Arrpos = pos - 1;
    if(pos > n){
        printf("Error!!...Plz Enter a valid number.\n");
        printf("Enter The position to delete :: ");
        scanf("%d",&userpos);
        DeletElement(arr,userpos);}
    else
    {
        for(int i =Arrpos; i < n-1; i++)
        {
            arr[i] = arr[i+1];
        }
        printf("Array Elements :: ");
        for(int i =0;i<n-1; i++)
            printf("%d ",arr[i]);
    }
}

int main()
{
    int arr[n];
    int pos;
    printf("Enter the 7 Array elements ::\n");

    for(int i =0; i < n; i++)
       scanf("%d",&arr[i]);
    printf("Enter The position to delete :: ");
    scanf("%d",&pos);
    DeletElement(arr,pos);





    return 0;
}
