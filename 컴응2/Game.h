#pragma once
#include <Windows.h>
#include <iostream>

using namespace std;

class Game
{
private:
	int x;
	int y;
	int direction;
	void gotoXY(int x, int y);
public:
	Game();
	~Game();

	void setDirection(int i);
	void move();

};

