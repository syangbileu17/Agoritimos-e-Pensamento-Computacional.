#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Bubble Sort
void bubble_sort(int arr[], int n, int *trocas, int *comp){
    int i, j, aux;
    for (j = 0; j < n - 1; j++){ 
        for (i = 0; i < n - j - 1; i++){ 
            (*comp)++; 
            if (arr[i] > arr[i + 1]) { 
                aux = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = aux;
                (*trocas)++;
            }
        }
    }
}

// Insertion Sort
void insertionSort(int lista[], int tamanho, int *trocas, int *comp) {
    for (int i = 1; i < tamanho; i++) {
        int aux = lista[i];
        int j = i - 1;

        while (j >= 0 && lista[j] > aux) {
            (*comp)++;
            lista[j + 1] = lista[j];
            j--;
            (*trocas)++;
        }
        if (j >= 0) (*comp)++; // conta comparação que falhou
        lista[j + 1] = aux;
    }
}

// Função de troca usada no Quick Sort
void swap(int *a, int *b, int *trocas) {
    int temp = *a;
    *a = *b;
    *b = temp;
    (*trocas)++;
}

// Partição do Quick Sort
int partition(int v[], int low, int high, int *comp, int *trocas) {
    int pivot = v[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        (*comp)++;
        if (v[j] <= pivot) {
            i++;
            swap(&v[i], &v[j], trocas);
        }
    }
    swap(&v[i + 1], &v[high], trocas);
    return i + 1;
}

// Quick Sort
void quickSort(int v[], int low, int high, int *comp, int *trocas) {
    if (low < high) {
        int pi = partition(v, low, high, comp, trocas);
        quickSort(v, low, pi - 1, comp, trocas);
        quickSort(v, pi + 1, high, comp, trocas);
    }
}

// Função para copiar arrays
void copiar(int *orig, int *dest, int n){
    for(int i = 0; i < n; i++) dest[i] = orig[i];
}

// Função para imprimir arrays
void imprimirArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {4, 5, 5, 3, 9, 3, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int trocas, comp;
    double tempo;
    clock_t t0, t1;
    int temp[n]; // vetor auxiliar

    printf("Array original:\n");
    imprimirArray(arr, n);

    printf("\nArray ordenado:\n");

    // Bubble Sort
    copiar(arr, temp, n);
    trocas = comp = 0;
    t0 = clock();
    bubble_sort(temp, n, &trocas, &comp);
    t1 = clock();
    tempo = 1000.0 * (t1 - t0) / CLOCKS_PER_SEC;
    printf("Bubble Sort -> ");
    imprimirArray(temp, n);
    printf("Comparações: %d, Trocas: %d, Tempo: %.2f ms\n\n", comp, trocas, tempo);

    // Insertion Sort
    copiar(arr, temp, n);
    trocas = comp = 0;
    t0 = clock();
    insertionSort(temp, n, &trocas, &comp);
    t1 = clock();
    tempo = 1000.0 * (t1 - t0) / CLOCKS_PER_SEC;
    printf("Insertion Sort -> ");
    imprimirArray(temp, n);
    printf("Comparações: %d, Trocas: %d, Tempo: %.2f ms\n\n", comp, trocas, tempo);

    // Quick Sort
    copiar(arr, temp, n);
    trocas = comp = 0;
    t0 = clock();
    quickSort(temp, 0, n - 1, &comp, &trocas);
    t1 = clock();
    tempo = 1000.0 * (t1 - t0) / CLOCKS_PER_SEC;
    printf("Quick Sort -> ");
    imprimirArray(temp, n);
    printf("Comparações: %d, Trocas: %d, Tempo: %.2f ms\n\n", comp, trocas, tempo);

    return 0;
}
