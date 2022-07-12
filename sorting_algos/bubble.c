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

void bubble(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr,j,j+1);
            }
            
        }
        print(arr,9);
        
    }
    
}


int main()
{
    int arr[9] = {2,3,7,5,1,9,2,2,5};

    printf("\nArray before sorting: ");
    print(arr,9);

    bubble(arr,9); 

    printf("\n\nArray after sorting: ");;
    print(arr,9);
}