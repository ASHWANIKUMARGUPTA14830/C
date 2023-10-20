#include <stdio.h>

void mergeArrays(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3, int merged[]) {
    int i, j, k;

    for (i = 0; i < n1 + n2; i++) {
        if (i < n1) {
            merged[i] = arr1[i];
        } else {
            merged[i] = arr2[i - n1];
        }
    }

    for (j = 0; j < n3; j++) {
        merged[i + j] = arr3[j];
    }
}

int main() {
    int array1[];
    int array2[];
    int array3[];
    int n;
    printf("enter the no of element:");
    scanf("%d",&n)
    printf("enter your 3 array of any element");
    fot(int k =0;k <n;i++){
        scanf("%")
    }
    int merged[]; 

    int n1 = sizeof(array1) / sizeof(array1[0]);
    int n2 = sizeof(array2) / sizeof(array2[0]);
    int n3 = sizeof(array3) / sizeof(array3[0]);

    mergeArrays(array1, array2, array3, n1, n2, n3, merged);

    printf("Merged Array: ");
    for (int i = 0; i < n1 + n2 + n3; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
