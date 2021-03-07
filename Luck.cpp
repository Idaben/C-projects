#include <stdio.h>
#include <stdlib.h>

int main()
{

  int number;
  int determiner;
  printf("Enter a 2 to 4 digit number.....\n");
  scanf("%d", &number);
  determiner = number % 2;

  if  (determiner = 0)
    {
    printf("Congratulations you have chosen a lucky number!");
    }
  else
    {
    printf("Unfornately today will be an unlucky day for you");
    }
return 0;
}
