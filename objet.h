#ifndef OBJET_H
#define OBJET_H

#include <iostream>
#include <QPoint>
using namespace std;

class Objet : public QPoint
{
private:
  QPoint p;
  int Pv;

public:
  Objet();

  virtual ~Objet (){}
  void setPos(int longueur, int largeur);
  void setPv(int PV);
  int getPv();
};

#endif // OBJET_H
