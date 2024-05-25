#include <iostream>

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
        quicksort(arr, low, pivot - 1);
        quicksort(arr, pivot + 1, high);
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (i <= j) {
        while (i <= high && arr[i] <= pivot) i++;
        while (j >= low && arr[j] > pivot) j--;

        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    swap(arr[low], arr[j]);
    return j;
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

/* Ну тут простая быстрая сортировка с опорным элементом через vector, т.к.быстрая сортировка кушает доп.память, чтобы хранить стек вызовов функции quicksort.
*  Примечание: данный алгоритм я реализовал с помощью книги "Грокаем алгоритмы, глава 4" 
   и прочитал пару статей по быстрой сортировке + подсмотрел пару её реализаций на StackOverflow
*/ 