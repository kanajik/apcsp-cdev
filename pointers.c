#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %p\n", (void*)ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %p\n", (void*)&a);

float d;
float e;

float* ptrtod = &d;
float* ptrtoe = &e;

d = 11.12431;
e = 7.1234432;

printf("The value of d is %f and the address of d is %p\n", d, &d);
printf("The value of e is %f and the address of e is %p\n", e, &e);

float temp = *ptrtod;
*ptrtod = *ptrtoe;
*ptrtoe = temp;

printf("The value of d is %f\n", *ptrtod);
printf("The value of e is %f\n", *ptrtoe);
}
