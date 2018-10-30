#include "obstacle.h"

Obstacle::Obstacle()
{
  srand((unsigned)time(0));
  this->type=(rand()%3);
  if(this->type!=BUISSON) this->taille=(rand()%3)+1;
  else this->taille=1;
  this->o = Objet();
}

void Obstacle::setPv(int longueur, int largeur)
{
  int tmp = longueur*largeur;
  this->o.setPv(tmp);
}

void Obstacle::setObstacle(int longueur , int largeur)
{
    this->setPv(longueur,largeur);
    this->o.setPos(longueur, largeur);
}
