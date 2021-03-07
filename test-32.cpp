#include <windows.h>
#include <stdio.h>
//THIS PROGRAM BASICALLY OUTPUTS THE THINGS THAT I LAST COPIED
void BailOut(char *msg)
{
  fprintf(stderr, "Exiting: %s\n", msg);
  exit(1);
}

int main()
{
  HANDLE h;

  if (!OpenClipboard(NULL))
    BailOut("Can't open clipboard");

  h = GetClipboardData(CF_TEXT);

  printf("%s\n", (char *)h);

  CloseClipboard();
  return 0;
}
