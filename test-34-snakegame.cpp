#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <direct.h>
#include <windows.h>


void gotoxy(int x, int y)
  {
      COORD coord;
      coord.X = x;
      coord.Y = y;
      SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
  }

int main()
{

//DECLARATION OF VARIABLES
  int x = 35, y = 22, cleared = 0;
  int x_ball = 35, y_ball = 0;

  int gameloop = 1;
  char snake_main[100] = "xxxx";
  char ball[10] = "O";
  int key;
  char blank[10] = "";
  int ball_exist = 0;

//INITIAL PRINT OF SNAKE
  gotoxy(x,y);
  printf("%s", snake_main);

//THE GAME LOOP

while (gameloop = 1)
{
  if (cleared == 1)
    {
      system("cls");
      gotoxy(x,y);
      printf("%s", snake_main);

    }

//CONTROL OF PLAYER
  key = getch();

//RIGHT
  if (key == 100)
    {
      x++;
      system("cls");
      gotoxy(x, y);
      printf("%s", snake_main);
    }

//LEFT
  if (key == 97)
    {
      x--;
      system("cls");
      gotoxy(x, y);
      printf("%s", snake_main);
    }

//FIRE
  if (key == 115)
    {
      gotoxy(x,y);
      printf("%s", ball);
      x_ball = x;
      y_ball = y;

      ball_exist = 0;

      while (ball_exist <= 22)
            {
              system("cls");
              cleared = 1;
              gotoxy(x_ball, y_ball);
              printf("%s", ball);
              y_ball--;
              ball_exist++;
            }

    }







}//END BRACE OF GAME LOOP

return 0;
}
