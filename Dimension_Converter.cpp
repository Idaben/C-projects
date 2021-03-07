#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>

int main()
{
  printf("Assuming that your number is 18, enter your desired values to be converted.\n");
  float number;
  float converted;
  scanf("%f", &number);
  printf("Converting.........\n");
  converted = (number/10)*18;
  printf("The converted value is %f",converted);
  sleep(300);
  return 0;
}
