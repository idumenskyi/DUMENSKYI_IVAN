#include <iostream>
#include <string>
#include <sstream>

#include "PacMan.h"
#include "Windows.h"

using namespace std;

bool gamerunning = true;
PacMan pacman;

int main()
{
    while (gamerunning)
    {
        stringstream ss;
        ss << score;
        string items = "Score: ";
        items += ss.str();
        system("cls");
        for (int i = 0; i < 10; i++)
        {
            cout << maze[i] << endl;
        }
        cout << "For moving use keys - W, A, S, D" << endl;
        for (int i = 0; i < 1; i++)
        {
            cout << items << endl;
        }

        system("pause>nul");
     
        if (GetAsyncKeyState('W'))
        {
            pacman.Move(-1, 0);
        }
        else if (GetAsyncKeyState('S'))
        {
            pacman.Move(1, 0);
        }
        else if (GetAsyncKeyState('A'))
        {
            pacman.Move(0, -1);
        }
        else if (GetAsyncKeyState('D'))
        {
            pacman.Move(0, 1);
        }
           
    }

    system("pause");
}

