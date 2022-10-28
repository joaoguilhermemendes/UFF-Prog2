#include <stdio.h>
#include <stdlib.h>
#include <time.h>      
#include <unistd.h>     

//limita o tamanho do maior inteiro gerado
#define lim 1000000000
//N tamanho do vetor
#define N 1000000

void merge(int V[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = V[l + i];
    for (j = 0; j < n2; j++)
        R[j] = V[m + 1 + j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            V[k] = L[i];
            i++;
        }
        else {
            V[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        V[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        V[k] = R[j];
        j++;
        k++;
    }
}
 
/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(int V[], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;
 
        // Sort first and second halves
        mergeSort(V, l, m);
        mergeSort(V, m + 1, r);
 
        merge(V, l, m, r);
    }
}
 
int main()
{
  int k=0,tam=N;
  int V[N];  
  
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tam);

  srand(time(NULL));
  for(k=0;k<=tam;k++){
      V[k]=rand()%lim;
  }

  double time_spent = 0;
  clock_t begin = clock();
  
  mergeSort(V, 0, tam - 1);

  clock_t end = clock();
  time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
  printf("The elapsed time is %f seconds\n", time_spent);
  
  return 0;
}