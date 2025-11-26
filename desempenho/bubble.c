#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    // Percorre todos os elementos
    for (i = 0; i < n - 1; i++) {
        // Últimos i elementos já estão na posição correta
        for (j = 0; j < n - i - 1; j++) {
            // Troca se o elemento atual for maior que o próximo
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array original: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    bubbleSort(arr, n);

    printf("\nArray ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
