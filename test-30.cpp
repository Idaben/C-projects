#include <stdio.h>
#include <stdlib.h>
#include <strings.h>


int main ()
{
  float input_test = 355/113;
  int r1 = 0, r2 = 0;
  float *output_boy;
  output_boy = &input_test;

  printf("The value of input test is %.1f\n", *output_boy);
}
