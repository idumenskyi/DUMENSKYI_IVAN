#include <iostream>
#include "PacMan.h"

int score;
bool gamerunning = true;

int main()
{
    while (gamerunning)
    {
        system("cls");
        myNamespace::PacMan p;
        p.printMap();
        p.points();
        p.pressKey();
        system("pause");
    }

}


