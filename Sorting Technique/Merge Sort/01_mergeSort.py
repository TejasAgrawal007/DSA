def mergeSort(arr):

    if len(arr) > 1:

        # Finding the Mid of an array.
        mid = len(arr)//2

        # Dividing The array Element
        L = arr[:mid]

        # into two halves.
        R = arr[mid:]

        # Sorting the First half
        mergeSort(L)

        # Sorting the Second half
        mergeSort(R)

        i = j = k = 0

        # Copying the temp data to L[] and R[]

        while i < len(L) and j < len(R):
            if L[i] < R[j]:
                arr[k] = L[i]
                i += 1
            else:
                arr[k] = R[j]
                j += 1
            k += 1


        # Checking If any Element was Left or Not.

        while i < len(L):
            arr[k] = L[i]
            i += 1
            k += 1

        while j < len(R):
            arr[k] = R[j]
            j += 1
            k += 1


# Code to print a List.

def printList(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")
    print()


#  Derived Code.

if __name__=="__main__":
     arr = [12, 11, 13, 5, 6, 7]
     print("Given Arrays is ", end="\n")
     print(arr)
     mergeSort(arr)
     print("Sorted Array is ", end="\n")
     printList(arr)

