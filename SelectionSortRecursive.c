#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

//Recursive selection sort function
void recursiveSelectionSort(int arr[], int n, int index) {
    
    if (index == n) {
        return;
    }

    //Finding the minimum element 
    int min = index;
    for (int j = index + 1; j < n; j++) {
        if (arr[j] < arr[min]) {
            min = j;
        }
    }

    if (min != index) {
        swap(&arr[min], &arr[index]);
    }

    
    recursiveSelectionSort(arr, n, index + 1);
}

int main() {
    int arr[] = {7, 11, 4, 10, 5, 9, 12, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    recursiveSelectionSort(arr, n, 0);

    //Print
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}
