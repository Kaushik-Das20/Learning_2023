#include <stdio.h>
#include <stdlib.h>

int find_smallest_digit(int number) {
  int smallest_digit = 9;
  while (number > 0) {
    int digit = number % 10;
    if (digit < smallest_digit) {
      smallest_digit = digit;
    }
    number /= 10;
  }
  return smallest_digit;
}

int find_largest_digit(int number) {
  int largest_digit = 0;
  while (number > 0) {
    int digit = number % 10;
    if (digit > largest_digit) {
      largest_digit = digit;
    }
    number /= 10;
  }
  return largest_digit;
}

int main() {
  int n;
  printf("Enter number of entries you want to check\n");
  scanf("%d", &n);

  int numbers[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &numbers[i]);
  }

  for (int i = 0; i < n; i++) {
    if (numbers[i] < 10) {
      printf("Invalid\n");
    } else {
      printf("Number %d: smallest digit: %d, largest digit: %d\n", i + 1, find_smallest_digit(numbers[i]), find_largest_digit(numbers[i]));
    }
  }

  return 0;
}