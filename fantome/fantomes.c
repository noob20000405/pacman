#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"fantomes.h"

fantome_t** placer_n_f(int** pl, int n)
{
  int x = -1;
  int y = -1;
  
  
  int i;
  srand(time(NULL));

  fantome_t** fantome = malloc(n*sizeof(fantome_t*));

  for(i=0;i<n;i++)
  {
    fantome[i] = malloc(sizeof(fantome_t));
  }
  
  
  for(i=0;i<n;i++)
  {
  	while(!valide(pl, y, x)){
  	  x = (rand() % ((WIDTH-1)-1))+ 1;
  	  y = (rand() % ((HEIGHT-1)-1))+ 1;
	}

  	fantome[i]->x = x;
    fantome[i]->y = y;

  }
  
  return fantome;
}

void deplacer_f(int** pl, fantome_t** fants)
{
  int x, y;
  int d, i;
  int len = sizeof(fantome_t**)/sizeof(fantome_t*);
  
  srand(time(NULL));
  
  for(i=0;i<len;i++)
  {
  	d = (rand() % (4 - 0))+1;
  	x = fants[i]->x;
  	y = fants[i]->y;
  	
  	switch(d)
  	{
	    case 0:
	 	 	if(valide(pl, y-1, x))
		  	{
		
	  		  pl[y][x] = 0;
	  		  y--;
	  		  fants[i]->y = y;
	  		  pl[y][x] = 3;
	  	    }
	  	  break;
	    case 1:
	  		if(valide(pl, y+1, x))
			{
	  	 	 pl[y][x] = 0;
	  	 	 y++;
	  	 	 fants[i]->y = y;
	  	 	 pl[y][x] = 3;
			}
			break;
		case 2:
			if(valide(pl, y, x-1))
			{
			  pl[y][x] = 0;
			  x--;
			  fants[i]->x = x;
			  pl[y][x] = 3;
			}
			break;
		case 3:
			if(valide(pl, y, x+1))
			{
				pl[y][x] = 0;
				x++;
				fants[i]->x = x;
				pl[y][x] = 3;
			}
			break;
	}
  }
}
