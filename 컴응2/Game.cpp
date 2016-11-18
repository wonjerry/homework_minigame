#include "Game.h"

Game::Game()
{
	x = 5;
	y = 5;
	direction = 0;
}


Game::~Game()
{
}

void Game::gotoXY(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}

void Game::setDirection(int i)
{
	direction = i;
}

void Game::move()
{
	if (direction == 37) {
		x--;
	}
	else if (direction == 38) {
		y--;
	}
	else if (direction == 39) {
		x++;
	}
	else if (direction == 40) {
		y++;
	}
	system("cls");
	this->gotoXY(x, y);
	cout << x << " " << y;
	cout << "бс";
}
