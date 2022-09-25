#include<stdio.h>

void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    
}

int main(){
    // int arr[100] = {10, 20, 40, 50, 60};
    int arr[] = {10, 20, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    display(arr, n);
    return 0;
}