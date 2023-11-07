#ifndef BANNOUR_H_INCLUDED
#define BANNOUR_H_INCLUDED
#include <stdio.h>
typedef struct


typedef struct {
  char *nom_et_prénom;
  int id;
  char *date_naissance;
  char sexe;
  char Groupe_sanguin;
  char *numero_telephone;
} Formulaire;

#endif
} formulaire;
int ajouter(char *, Formulaire);
int modifier( char *, int, Formulaire );
int supprimer(char *, int );
formulaire chercher(char *, int);

#endif
