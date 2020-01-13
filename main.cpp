#include <iostream>
#include <string>
#include <sstream>

#include "PacMan.h"
#include "Windows.h"

#define VK_KEY_A	0x41                
#define VK_KEY_D	0x44                
#define VK_KEY_S	0x53                
#define VK_KEY_W	0x57                

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
        cout << "For moving use keys - W, A, S, D or arrows < >" << endl;
        for (int i = 0; i < 1; i++)
        {
            cout << items << endl;
        }

        system("pause>nul");

        if (GetAsyncKeyState(VK_UP))
        {
            pacman.Move(-1, 0);
        }
        if (GetAsyncKeyState(VK_KEY_W))
        {
            pacman.Move(-1, 0);
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            pacman.Move(1, 0);
        }
        if (GetAsyncKeyState(VK_KEY_S))
        {
            pacman.Move(1, 0);
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            pacman.Move(0, 1);
        }
        if (GetAsyncKeyState(VK_KEY_D))
        {
            pacman.Move(0, 1);
        }
        if (GetAsyncKeyState(VK_LEFT))
        {
            pacman.Move(0, -1);
        }
        if (GetAsyncKeyState(VK_KEY_A))
        {
            pacman.Move(0, -1);
        }
    }

    system("pause");
}

