#include <stdio.h>

int main() {
  int cppconEarlyYears[6] = {2014, 2015, 2016, 2017, 2018, 2019};
  cppconEarlyYears[5] = 0; // <- can't delete
  // cppconEarlyYears[6] = 2020; // <- can't add

  int cppconEarlyRevised[6];
  // cppconEarlyRevised = cppconEarlyYears; // <- can't copy or assign

  for (int i = 0; i < 5; i++) { // <- yes - it prints
    cppconEarlyRevised[i] = cppconEarlyYears[i];
  }

  for (int i = 0; i < 7; i++) { // <- yes - it prints
    printf("%d ", cppconEarlyRevised[i]);
  }

  return 0;
}