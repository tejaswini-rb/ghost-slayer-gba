#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

// TODO: Create any necessary structs

/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/
struct position {
    int x;
    int y;
} slayers, ghost1s, ghost2s, ghost3s;

volatile int timer;

void startScreen(void);
void playState(void);
void ghosts(void);
void moveGhost1(void);
void moveGhost2(void);
void moveGhost3(void);
void slayerMovement(u32 *pressedButtons);
int die(void);
int finishLine(void);
void timerFunc(void);


#endif
