#include <stdio.h>

void display(int arr[], int n)
{
    // Code for Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void indInsertion(int arr[],int size, int element, int capacity, int index){
    if(size>=capacity){
        printf("Insertion Failed\n");
        return;

    }
    else{
        for (int i = size-1; i >= index; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[index] = element;
        printf("Insertion Successful\n");
        return;
    }
}


int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5;
    printf("Before Insertion\n");
    display(arr, size);
    int element = 45, index = 3;
    indInsertion(arr, size, element,10,index);
    size += 1;
    printf("After Insertion\n");
    display(arr, size);
    return 0;
}