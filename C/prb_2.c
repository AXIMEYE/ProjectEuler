/* Each new term in the Fibonacci sequence is generated by adding the previous two terms.
   By starting with 1 and 2, the first 10 terms will be:

   1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

   By considering the terms in the Fibonacci sequence whose values do not exceed four million,
   find the sum of the even-valued terms.*/

// first write a program to find no. of numbers in fib seq (where lim = 4000000)
// create a array that can hold that many nos.
// complete the program

#include <stdio.h>

int print_fib(unsigned int lim);
void store_fib_num(int num_fib, unsigned int lim);
void print_array();

int
main(void) {
  unsigned int lim = 0;

  printf("Enter lim:");
  scanf("%u", &lim);

  int num_fib = print_fib(lim);
  store_fib_num(num_fib, lim);

  return 0;
}

int
print_fib(unsigned int lim) {
  int a = 1, b = 2;
  int sum = 0;

  printf("%d %d ", a, b);

  int i = 0;
  for(i = 2; a+b <= lim; i++) {
    sum = a + b;
    printf("%d ", sum);

    a = b;
    b = sum;
  }
  printf("\ni: %d\n", i);

  return i;
}

void
store_fib_num(int num_fib, unsigned int lim) {
  printf("num_fib: %d\n", num_fib);

  int a = 1, b = 2;
  int sum = 0, req_sum = 0; // required_sum (real aim of program)
  unsigned fib_num[num_fib];

  fib_num[0] = 1;
  fib_num[1] = 2;

  int i = 0;
  for(i = 2; a+b <= lim; i++) {
    sum = a + b;
    fib_num[i] = sum;

    a = b;
    b = sum;
  }
  
  for(i = 0; i < num_fib; i++) {
    printf("i[%d]: %d\n", i, fib_num[i]);
  }
  
  for(i = 0; i < num_fib; i++) {
    if(fib_num[i] % 2 == 0) {
      req_sum = req_sum + fib_num[i];
    }
  }
  printf("req_sum: %d\n", req_sum);
}

void
print_array() {
  
}