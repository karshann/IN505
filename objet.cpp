#include "objet.h"

Objet::Objet()
{
  this->p=QPoint();
  this->Pv=0;
}


void Objet::setPos(int longueur, int largeur)
{
  this->p.setX(longueur);
  this->p.setY(largeur);
}

int Objet::getPv()
{
  return Pv;
}

void Objet::setPv(int pv)
{
  this->Pv=pv;
}
