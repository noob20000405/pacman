#include<stdio.h>
#include<stdlib.h>
#include"affichage/affichage.h"
#include"plateau/plateau.h"
#include"joueur/joueur.h"
#include"fantome/fantomes.h"

int main()
{
	int** pl = creer_plateau();
	fantome_t** fants = placer_n_f(pl, NB_F);//NB_F : nombre des fantomes. Défini dans fantomes.h.
	int fini = 0;
	
	printf("\033[H\033[J");//rafraîchir la fenêtre.
	afficher(pl);
	
	joueur_t* jou = placer_j(pl);
	
	printf("\033[H\033[J");
	afficher(pl);
	
	while(!fini)
	{
		deplacer_j(pl, jou);
		deplacer_f(pl, fants);
		
		if(pl[jou->i][jou->j] == 3)//si le joueur est dans la même case avec une fantome.
		{
			fini = 1;
			printf("\033[H\033[J");
			afficher(pl);
		}
		
		else
		{
			update_j(pl, jou);
			printf("\033[H\033[J");
			afficher(pl);
			printf("Votre points : %d\n", jou->nb_pac);
		}
	}
	
	if(fini)
	{
		printf("GAME OVER \n");
		printf("Vous avez %d points.\n", jou->nb_pac);
	}
	
	
	
	return 0;
}
