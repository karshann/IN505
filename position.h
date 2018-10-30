#ifndef POSITION_H
#define POSITION_H

#include <iostream>
using namespace std;
class Position
{
private :
    int posx;
    int posy;

public :
    Position();
    ~Position(){}

    //Getter
    int GetPosX();
    int GetPosY();

    //Setter
    void setPosX(int longueur);
    void setPosY(int largeur);

    void initialisation(int longueur , int largeur);

};

#endif // POSITION_H
