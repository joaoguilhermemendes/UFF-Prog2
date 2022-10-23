#include <stdio.h>

void insertionSort(int* arr, int n) {
  for (int i = 1; i < n; i++) {
    int tmp = arr[i];
    int j= i-1;

    
    while (tmp < arr[j] && j >= 0) {
      arr[j+1] = arr[j];
      --j;
    }
    arr[j + 1] = tmp;
  }
  
  return arr;
}

int main() {
  int arr[5] = {9, 5, 1, 4, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  
  printf("Elements after sorting:\n");
  insertionSort(arr, n);

  for(int i=0; i<5; i++)
  {
    printf("%d\n",arr[i]);
  }
}
