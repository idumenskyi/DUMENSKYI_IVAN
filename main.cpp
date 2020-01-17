#include <iostream>
#include <string>
#include <sstream>

#include "PacMan.h"
#include "Windows.h"

const char VK_KEY_A	= 0x41;
const char VK_KEY_D = 0x44;
const char VK_KEY_S = 0x53;
const char VK_KEY_W = 0x57;               

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
        //doesnt work
        /*
        int PKey = 0;
        PKey = _getch();
        switch (PKey)
        { 
            
             case 0x57:
                    pacman.Move(-1, 0);
                    break;
             case 0x26:
                    pacman.Move(-1, 0);
                    break;
             case 0x53:
                    pacman.Move(1, 0);
                    break;
             case 0x28:
                    pacman.Move(1, 0);
                    break;          
             case 0x41:
                    pacman.Move(0, -1);
                    break;
             case 0x25:
                    pacman.Move(0, -1);
                    break;             
             case 0x44:
                    pacman.Move(0, 1);
                    break;
             case 0x27:
                    pacman.Move(0, 1);
                    break;
        }
        */
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

        if (GetAsyncKeyState(VK_KEY_D))
        {
            pacman.Move(0, 1);
        }
        if (GetAsyncKeyState(VK_RIGHT))
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

