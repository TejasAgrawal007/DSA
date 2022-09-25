#include<stdio.h>

void display(int arr[], int size){  
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);   
    }
}

void indexDelation(int arr[], int size, int index){ 
    for (int i = 0; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    
}
int main(){
    
    int arr[100] =  {1,4,5,6};
    int size = 4, index = 0;
     display(arr, size);
     printf("\n");
    indexDelation(arr, size, index);
    size-=1;
    display(arr, size);
    return 0;
}