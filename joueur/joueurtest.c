#include<stdio.h>
#include<stdlib.h>
#include"pac.h"
#include"plateau.h"

int main(){
  int** pl=creer_plateau();
  placer_j(pl);
  joueur_t *jou;
  deplacer_j(pl,jou);
  update_j(pl,jou);
  return 0;
}

