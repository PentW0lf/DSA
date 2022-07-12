#include <stdio.h>

void print(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
        
    }
    printf("\n");
    
}

void swap(int arr[],int a,int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void sel(int arr[],int size)
{
    int min;
    for (int i = 0; i < size; i++)
    {
        min = i;

        for (int j = i+1; j < size; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
            
        }
        swap(arr,i,min);
    }
    
}

int main()
{

    int arr[9] = {1,2,3,4,5,6,7,8};

    printf("\nArray before sorting: ");
    print(arr,9);

    sel(arr,9); 

    printf("\nArray after sorting: ");;
    print(arr,9);

}