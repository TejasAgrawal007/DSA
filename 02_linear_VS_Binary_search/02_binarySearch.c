#include<stdio.h>

int binarySearch(int arr[], int size, int element){
    int low, mid, high;

    low = 0;
    high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if(arr[mid] == element){
            return mid;   
        }
        if(arr[mid] < element){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {11, 22, 44, 55, 66, 77, 88, 99, 100};
    int size = sizeof(arr) / sizeof(arr[0]);

    int element = 55;
    int searchIndex = binarySearch(arr, size, element);
    printf("The Element is %d and index is %d", element, searchIndex);

    return 0;
}