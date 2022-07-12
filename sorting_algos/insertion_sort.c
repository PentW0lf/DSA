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

void ins(int arr[],int size)
{
    int key;

    for (int i = 1; i < size; i++)
    {
        key = i; 

        for (int j = i-1; j >= 0; j--)
        {

            if (arr[key] < arr[j])
            {
                swap(arr,key,j);
                key = j;
            }
 
        }
        
    }
    

}

int main()
{

    int arr[9] = {9,8,7,6,5,4,3,2,1};

    printf("\nArray before sorting: ");
    print(arr,9);

    ins(arr,9); 

    printf("\nArray after sorting: ");;
    print(arr,9);

}