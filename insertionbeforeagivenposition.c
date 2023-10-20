#include <stdio.h>

void insertBeforePosition(int arr[], int *size, int element, int position) {
    if (position < 1 || position > *size + 1) {
        printf("Invalid position\n");
        return;
    }

    for (int i = *size; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = element;
    (*size)++;
}

int main() {
    int myArray[10] = {1, 2, 3, 5};
    int size = 4;

    insertBeforePosition(myArray, &size, 4, 3);  

    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    return 0;
}
