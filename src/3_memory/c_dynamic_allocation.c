#include <stdio.h>
#include <stdlib.h>

// Notice allocating a pointer to a block memory
int main() {
  int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int *myArray =
      (int *)malloc(n * sizeof(int)); // Allocates memory for 'n' integers

  // Don't forget to free the memory when you're done
  free(myArray);
}