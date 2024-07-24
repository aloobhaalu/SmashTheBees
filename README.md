# Smash the Bees Game

## Overview
"Smash the Bees" is a simple and engaging game where the player controls a Lego character to catch moving bees. The game features a title screen, a play screen, and states for winning, losing, and viewing the leaderboard. The games has a 10 second timer in which you need to catch atleast 1 bee to win. 

## Controls
- **UP Button:** Move the player up
- **DOWN Button:** Move the player down
- **LEFT Button:** Move the player left
- **RIGHT Button:** Move the player right
- **START Button:** Begin the game from the title screen, leaderboard from win/lose screens, or play again from the leaderboard
- **SELECT Button:** Return to the title screen from any state in the game
  
## Game States
- **Start State:** Display the title screen. A bee moves around the upper half of the screen (because i wanted the bee to be in the sky :)). Press START to begin the game.
- **Play State:** Control the player to catch bees. The game displays the player's score and a timer in the bottom. If the timer reaches zero, the game ends.
- **Win State:** Display a win screen if the player catches bees before the timer runs out. Press SELECT to go to start or START to view the leaderboard.
- **Lose State:** Display a lose screen if the timer runs out before catching any bees. Press SELECT to go to start or START to view the leaderboard.
- **Leaderboard State:** Display the top scores. Press START to play again or SELECT to return to the title screen.

## Program Structure
- **main.c:** Contains the main loop and state transitions.
- **gba.h / gba.c:** Contains GBA-specific definitions and functions.
- **images/:** Contains the image data for the title screen, background, Lego character, and bees.

