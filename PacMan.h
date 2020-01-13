#ifndef PacMan_H
#define PacMan_H
#pragma once

class PacMan
{
public:
    PacMan();
    ~PacMan();
    void Move(int V, int H);
};

extern char maze[10][30];
extern int x;
extern int y;
extern int score;

#endif