#include <stdio.h>
#include <stdlib.h>
#include <strings.h>


int main()
{
  char input_string[101];
  char nothing[1] = "";
  char blank[1] = "";
  int char_count = 0;
  int x = 0;
  int propagate = 0;

  printf("STRING COUNTER\n");
  printf("Enter a string, no spaces.\n");
  scanf("%s", input_string);

  while (input_string[x] != *blank)
        {
          char_count++;
          x++;
        }

  printf("\nThe string has %d characters.", char_count);

}
