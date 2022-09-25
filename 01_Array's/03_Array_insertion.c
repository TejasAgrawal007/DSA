#include<stdio.h>

void display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}


int indexInsert(int arr[], int size, int element, int capacity, int index){
    if(size >= capacity){
        return 1;
    }
    for (int i = size-1; i >= index; i--)
    {
        arr[i + 1] = arr[i]; 
    }
    arr[index] = element;
    return 1;
}

int main(){
    int arr[100] = {10, 20, 40 , 50};
    int size = 5, element = 30, index = 2;
    display(arr, size);
    printf("\n");
    indexInsert(arr,  size, element,  100,  index);
    display(arr, size);
    return 0;
}