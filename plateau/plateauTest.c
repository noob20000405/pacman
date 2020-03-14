#include<stdio.h>
#include<stdlib.h>
#include"plateau.h"


int main()
{
  int** pl = creer_plateau(); //test creer_plateau().
  int i, j;
  for(i=0;i<10;i++)
  {
    for(j=0;j<10;j++)
    {
      printf("%d", pl[i][j]);
      if(j == 9)
      {
      	printf("\n");
      }
    }
  }
  
  printf("%d %d %d %d\n", valide(pl, 0, 0), valide(pl, 3, 4), valide(pl, 9, 9), valide(pl, 10, 10)); //test valide().
  return 0;
}
