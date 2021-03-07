#include <stdio.h>
#include <string.h>


int main ()
{
  char username[81] = "idaben";
  char password[81] = "mamamo";

  char input_username[10];
  char input_password[10];

  printf("PUP SIS\n\n");
  printf("Enter your username.\n");
  gets(input_username);
  printf("\nEnter your password.\n");
  gets(input_password);
  printf("\n");

  if (strcasecmp(input_username, username) == 0 && strcmp(input_password, password) == 0)
    {
      printf("You have succcesfuly logged in.\n\n\n");
      printf("WELCOME TO PUP SIS\n");
    }
  else if(strcasecmp(input_username, username) != 0 && strcmp(input_password, password) == 0)
    {
        printf("You have entered an incorrect username.");
    }
  else if(strcasecmp(input_username, username) == 0 && strcmp(input_password, password) != 0)
    {
        printf("You have entered an incorrect password.");
    }
  else if(strcasecmp(input_username, username) != 0 && strcmp(input_password, password) != 0)
    {
        printf("The username and password that you have entered are incorrect.");
    }

  return 0;
}
