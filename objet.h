#ifndef OBJET_H
#define OBJET_H

#include <iostream>
#include "position.h"
using namespace std;

class Objet : public Position
{
private:
  Position p;
  int Pv;

public:
  Objet();

  virtual ~Objet (){}
  void setPos(int longueur, int largeur);
  void setPv(int PV);
  int getPv();
};

#endif // OBJET_H
