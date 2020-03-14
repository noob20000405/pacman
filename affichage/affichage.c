#include<stdio.h>
#include<stdlib.h>
#include"affichage.h"

void afficher_brut(int** pl)
{
  int i, j;
  for(i=0;i<HEIGHT;i++)
  {
    for(j=0;j<WIDTH;j++)
    {
      printf("%d", pl[i][j]);
      if(j == WIDTH - 1)
      {
      	printf("\n");
      }
    }
  }
}

void afficher(int** pl)
{
  int i, j;
  
  for(i=0;i<HEIGHT;i++)
  {
    for(j=0;j<WIDTH;j++)
    {
      if(pl[i][j] == 1)
      {
        printf("°");
      }
      if(pl[i][j] == 2)
      {
        printf("M");
      }
      if(pl[i][j] == 3)
      {
        printf("F");
      }
      if(pl[i][j] == 4)
      {
        printf("J");
      }
      if(pl[i][j] == 0)
      {
        printf("0");
      }
      if(j == WIDTH - 1)
      {
      	printf("\n");
      }
    }
  }
}
