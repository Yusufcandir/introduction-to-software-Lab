Week 5

#include <stdio.h>

int factorialFor(int number);
int factorialWhile(int number);
int factorialRecursive(int number);

int fibonacciFor(int number);
int fibonacciWhile(int number);
int fibonacciRecursive(int number);

int main() {
  int a = 7;
  int b = fibonacciFor(a);
  int c = fibonacciWhile(a);
  int d = fibonacciRecursive(a);

  printf("%dth Fibonacci is %d, %d, %d\n", a, b, c, d);

  return 0;
}

int factorialWhile(int number) {
  if (number <= 0) return 0;

  int result = 1;

  while (number > 0) {
    result *= number;
    number--;
  }

  return result;
}

int factorialFor(int number) {
  if (number <= 0) return 0;

  int result = 1;

  for (int a = 1; a <= number; a++) {
    result *= a;
  }

  return result;
}

int factorialRecursive(int number) {
  if (number <= 1) return 1;

  return number * factorialRecursive(number - 1);
}

int fibonacciFor(int number) {
  int a1 = 1;
  int a2 = 1;

  if (number <= 2) return 1;

  for (int i = 0; i < (number - 2); i++) {
      int temp = a1 + a2;
      a1 = a2;
      a2 = temp;
  }

  return a2;
}

int fibonacciWhile(int number) {
    int a1 = 1;
    int a2 = 1;

    if (number <= 2) return 1;

    while (number - 2 > 0) {
        int temp = a1 + a2;
        a1 = a2;
        a2 = temp;
        number--;
    }

    return a2;
}

int fibonacciRecursive(int number) {
    if (number <= 2) return 1;

    return fibonacciRecursive(number -1) + fibonacciRecursive(number -2);
}
