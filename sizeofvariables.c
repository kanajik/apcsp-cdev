#include<stdio.h>

int main()
{
  int a = 545;

  // print value and size of an int variable
  printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));

char c = 'a';

//print value and size of an char variable
printf("char c value: %c and size %lu bytes\n", c, sizeof(c));

float f = 1.11;

//print value and size of an float variable
printf("float f value: %f and size %lu bytes\n", f, sizeof(f));

double d = 12.3453;

//print value and size of an double variable
printf("double d value: %f and size %lu bytes\n", d, sizeof(d));


unsigned int i = 7;

//print value and size of an unsigned int
printf("unsigned int i value: %d and size %lu bytes\n", i, sizeof(i));

short int j = 5;

//print value and size of an short int
printf("short int j value: %d and size %lu bytes\n", j, sizeof(j));
}
