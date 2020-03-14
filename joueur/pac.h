#include<stdio.h>
#include<stdlib.h>
#include"plateau.h"

/**
 *\struct jouer
 *\typedef jouer_t
 *\brief Tableau de taille variable.
 */
struct joueur{
  int i;//déplacement pour joueur.
  int j;
  char J;//La lettre représente le joueur.
};

typedef struct joueur joueur_t;
/**
*\brief Crée le joueur en choisissant ses coordonnées sur le plateau.
*\param pl emplacement du joueur
*\return pointeur vers la coordonnée sur le plateau
 */
joueur_t* placer_j(int** pl);

/**
*\brief Demande au joueur de saisir une toucheparmiwasdet déplace le joueur en conséquence
*\param pl emplacement du joueur
*\param jou coordonnée du joueur
*\return rien
 */
void deplacer_j(int** pl, joueur_t* jou);

/**
*\brief Modifie l’emplacement du joueur dans le plateau après qu’il se soit déplacé.
*\param pl emplacement du joueur
*\param jou coordonnée du joueur
*\return rien
 */
void update_j(int** pl, joueur_t* jou);
