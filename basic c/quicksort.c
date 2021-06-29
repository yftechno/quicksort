#include <stdio.h>

void swap(unsigned int* a,unsigned int* b){
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(unsigned int array[],unsigned  int low,unsigned  int high){
  int pivot = array[high];
  int i = (low - 1);

  for (int j = low; j <= (high - 1); j++){
    if (array[j] <= pivot){
      i++;
      swap(&array[i], &array[j]);
    }
  }
}

void quickSort(unsigned int array[], unsigned int low, unsigned int high){
  if(low < high){
    int partitionIndex = partition(array, low, high);

    quickSort(array, low, partitionIndex - 1);
    quickSort(array, partitionIndex + 1, high);

  }
}

void printArray(int arr[], int size){

  printf("BEGIN | ");
  int i;
  for(i = 0; i < size; i++){
    printf("%d | ", arr[i]);
    if((i+1) % 10 == 0) printf("\n");
  }
  printf("END");
}

int main() {
  int array[] = {10, 7, 8, 9, 1, 5};
  int n = sizeof(array) / sizeof(array[0]);
  quicksort(array, 0, n - 1);
  printf("Sorted Array:\n");
  printArray(array);
  return 0;
}
