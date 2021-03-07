#include <stdio.h>
#include <string.h>

int main()
{
  int age = 0;
  char sex[2], mstatus[2];
  char female[2] = "F";

  printf("Enter your age.\n");
  scanf("%d", &age);
  printf("Enter your sex, M for male, F for female.\n");
  scanf("%s", &sex);
  printf("Enter your marital status, if married Y, if not N.\n");
  scanf("%s", &mstatus);

  if (strcmp(sex, female) == 0)
    {
      printf("You can only work in urban areas.");
    }
  else
    {
      if (age <= 40 && age >= 20)
        {
          printf("You can work anywhere.");
        }
      else if (age > 40 && age <= 60)
        {
          printf("You can only work in urban areas.");
        }
      else
        {
          printf("ERROR");
        }
    }
  return 0;
}
