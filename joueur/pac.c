#include<stdio.h>
#include<stdlib.h>
#include"pac.h"

joueur_t *placer_j(int** pl){
  joueur_t *jou;
  jou = malloc(sizeof(joueur_t));
  printf("donner votre position entre (0,0)et(10,10)");
  scanf("%d,%d",&(jou->i),&(jou->j));
  return jou;
}

void deplacer_j(int** pl, joueur_t *jou){
  char place;//le choix de joueur(entre 'w','a','s','d')
  printf("votre deplacement:");
  scanf("%s",&place);
  if(place=='w' && valide(pl,jou->i,(jou->j)-1)){
  	pl[jou->i][jou->j]=0;
    jou->j=(jou->j)-1;
  }else if(place=='s'&& valide(pl,jou->i,(jou->j)+1)){
  	pl[jou->i][jou->j]=0;
	jou->j=(jou->j)+1;
  }else if(place=='a'&& valide(pl,(jou->i)-1,jou->j)){
  	pl[jou->i][jou->j]=0;
	jou->i=(jou->i)-1;
  }else if(place=='d'&& valide(pl,(jou->i)+1,jou->j)){
  	pl[jou->i][jou->j]=0;
	jou->i=(jou->i)+1;
  }
}

void update_j(int** pl, joueur_t *jou){
  pl[jou->i][jou->j]=4;
}
