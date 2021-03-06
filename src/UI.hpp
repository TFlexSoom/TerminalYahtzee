/*
  Tristan Hilbert
  11/21/17
  UI for Yahtzee using Curses
*/
#ifndef __UI_HPP
#define __UI_HPP
#include "Player.hpp"
#include "Dice.hpp"
#include <ncurses.h>
#include <string>

class UI {
private:
	Player * player_array;
	int * numPlayers;
	Dice * dice_array;
	int * current_turn;
	WINDOW * wnd;
	int * selectorRow;
	int * selectorCol;

public:
	UI(Player *,int *, Dice *, int *);
	~UI();
	void start();
	void title();
	void updatePrint();
	void Error(std::string);
	int getUserInput();
	bool playAgain();
	void end();
	void printChart();
	void printDice(int, int);
	void printPlayer();
	void printButtons();
	std::string playerValue(int);
	void move(int);
        int select();
        void highlight();	
	void highlight_DiceWhite();
	void highlight_blinkCurs();
};
#endif
