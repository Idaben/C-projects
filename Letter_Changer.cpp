#include<stdio.h>
#include<stdlib.h>

int main()
{
  char chord_letter;
  int offset = 5;
  int chord;
  int position = 0;
  int chordal[11] = {0,1,2,3,4,5,6,7,8,9,10};
  int determined_position;
  int transposed;

//Convert Letters to Numbers
scanf("%d", &chord);


//Identifying what position the input was in
    while (chord != chordal[position])
    {
      position++;
    }
   determined_position = position;


//this part is where you add the offset ot the determined determined position
  transposed = determined_position + offset;



//checking if the value exceded the number of chords
//if the input was 7
    if (transposed == 12)
      {
      transposed = 1;
      }

//if the input was 8
    if (transposed == 13)
      {
      transposed = 2;
      }
//if the input was 9
    if (transposed == 14)
      {
      transposed = 3;
      }
//if the input was 10
    if (transposed == 15)
      {
      transposed = 4;
      }

//if the input was 11
      if (transposed == 16)
      {
      transposed = 5;
      }
//if the input was 12
      if (transposed == 17)
      {
      transposed = 6;
      }


printf("%d", transposed);







































}
