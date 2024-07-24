#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

#define MAX_FLIES 5
//#define TIMER_LIMIT 1800 // 30 seconds * 60 frames per second (guessing this should correct)
#define LEADERBOARD_SIZE 5
#define MARGIN 20

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

typedef struct {
    int row;
    int col;
    int oldRow;
    int oldCol;
    int height;
    int width;
    int active;
} Fly;

typedef struct {
    int row;
    int col;
    int oldRow;
    int oldCol;
    int height;
    int width;
} Player;

extern Player player;
extern Fly flies[MAX_FLIES];
extern int score;
extern int timer;
extern int personalBest;

void initialize(void);
void goToStart(void);
void startState(void);
void goToPlay(void);
void playState(void);
void goToWin(void);
void winState(void);
void goToLose(void);
void loseState(void);
void goToLeaderboard(void);
void leaderboardState(void);
void updateLeaderboard(void);
void drawPlayer(void);
void drawFlies(void);
void drawScore(void);
void drawTimer(void);
void drawString(int row, int col, char *str, u16 color);
void drawLeaderboard(void);

#endif
