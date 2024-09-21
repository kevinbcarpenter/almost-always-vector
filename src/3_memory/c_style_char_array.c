#include <stdio.h>
#include <string.h>

int main() {
  char arr[3][10] = {"Welcome", "CppCon", "2024"};
  printf("String array Elements are:\n");

  for (int i = 0; i < 3; i++) {
    printf("%s\n", arr[i]);
  }

  return 0;
}