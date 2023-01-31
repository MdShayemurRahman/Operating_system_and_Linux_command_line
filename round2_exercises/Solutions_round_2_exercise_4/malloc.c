#include<stdio.h>
#include <stdlib.h>

int main() {
  int n = 10;
  printf("The array size is: %d", n);

  // This pointer will hold the base address of the block created
  int* ptr;

  // dynamically allocate memory in c.
  ptr = (int*)malloc(n * sizeof(int));

  for(int i = 0; i < n; i++) {
    ptr[i] = i + 1;
  }

printf("\nAllocated data in memory: ");
  for(int i = 0; i < n; i++) {
    printf("%d ", ptr[i]);
  }

  
  free(ptr);
  printf("\nFreed memory!!!!\n");
}