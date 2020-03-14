#include<stdio.h>
#include<stdlib.h>
#include"plateau.h"


int** creer_plateau()
{
  int i, j;
  int** pl = (int**)malloc(sizeof(int*)*HEIGHT);
  
  for(i=0;i<HEIGHT;i++)
    {
      pl[i] = (int*)malloc(sizeof(int)*WIDTH);
    }

  for(i=0;i<HEIGHT;i++)
    {
      for(j=0;j<WIDTH;j++)
	{
	  if(i==0 || i==HEIGHT - 1 || j==0 || j==WIDTH - 1)
	    {
	      pl[i][j] = 2;
	    }
	  else
	    {
	      pl[i][j] = 0;
	    }
	}
    }

  return pl;
  
}

int valide(int** pl, int i, int j)
{
  int width = WIDTH;
  int height = HEIGHT;

  printf("%d %d\n", width, height);
  if(i < 0 || j < 0 || i > height - 1 || j > width - 1)
  {
    return 0;
  }

  return 1;
}
