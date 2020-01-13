#include "PacMan.h"

int x = 1;
int y = 1;
int score = 0;

char maze[10][30] = {
    "########        ########",
    "#@*****#        #******#",
    "# *****##########**+***#",
    "#***+*************+**+*#",
    "#**+***##########***+**#",
    "#******#        #******#",
    "########        ########"
};


PacMan::PacMan()
{

}


PacMan::~PacMan()
{

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
