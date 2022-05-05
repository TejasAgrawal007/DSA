def bubbleSort(arr):
    n = len(arr)

    # Traverse through all array element.

    for i in range(n):

        # Last i element already in place
        for j in range(0, n-i-1):

            ''' 
                Traverse The array from 0 to n - i - 1

                Swap The Element found is greater then the next element.

            '''

            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]


# Driver code to test above
arr = [64, 34, 25, 12, 22, 11, 90]


bubbleSort(arr)


print("Sorted Array is: ")
for i in range(len(arr)):
    print(arr[i], end=" ")
