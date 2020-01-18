#include <iostream>
#include <sstream>
#include "Windows.h"
#include "PacMan.h"
namespace myNamespace {

    char maze[10][30] = {
    "########        ########",
    "#@*****#        #******#",
    "# *****##########**+***#",
    "#***+*************+**+*#",
    "#**+***##########***+**#",
    "#******#        #******#",
    "########        ########"
    };

    int x;
    int y;
    static int score;




    void PacMan::printMap()
    {
        for (int i = 0; i < 10; i++)
        {
            std::cout << maze[i] << std::endl;
        }

    }

    void PacMan::Move(int V, int H)
    {
        int y2 = y + V;
        int x2 = x + H;

        if (maze[y2][x2] == '+')
        {
            maze[y2 - 1][x2 - 1] = '*';
            maze[y2 - 1][x2] = '*';
            maze[y2 - 1][x2 + 1] = '*';
            maze[y2][x2 - 1] = '*';
            maze[y2][x2 + 1] = '*';
            maze[y2 + 1][x2 - 1] = '*';
            maze[y2 + 1][x2] = '*';
            maze[y2 + 1][x2 + 1] = '*';
        }
        if (maze[y2][x2] == '*')
        {
            score++;
        }
        if (maze[y][x2] == ' '
            || maze[y][x2] == '*'
            || maze[y][x2] == '+')
        {
            maze[y][x] = ' ';
            x += H;
            maze[y][x] = '@';

        }
        if (maze[y2][x] == ' '
            || maze[y2][x] == '*'
            || maze[y2][x] == '+')
        {
            maze[y][x] = ' ';
            y += V;
            maze[y][x] = '@';

        }


    }
    void PacMan::points()
    {
        std::stringstream ss;
        ss << score;
        std::string items = "Score: ";
        items += ss.str();
        for (int i = 0; i < 1; i++)
        {
            std::cout << items << std::endl;
        }
    }
    void PacMan::pressKey()
    {
        /*
        int vKey;
        
        switch (vKey)
        {
            case GetAsyncKeyState('W'):
            Move(-1, 0);
            break;
            case GetAsyncKeyState('S'):
            Move(1, 0);
            break;
            case GetAsyncKeyState('A'):
            Move(0, -1);
            break;
            case GetAsyncKeyState('D'):
            Move(0, 1);
            break;
            default:
                break;

        }
        */

        if (GetAsyncKeyState('W'))
        {
            Move(-1, 0);
        }
        else if (GetAsyncKeyState('S'))
        {
            Move(1, 0);
        }
        else if (GetAsyncKeyState('A'))
        {
            Move(0, -1);
        }
        else if (GetAsyncKeyState('D'))
        {
            Move(0, 1);
        }

    }



}
