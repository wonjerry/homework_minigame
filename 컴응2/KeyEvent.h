#pragma once
#include < windows.h>
#include <iostream>

class KeyEvent {
private:
	HANDLE hln;
	COORD keyWhere;
	DWORD EventCount;
	INPUT_RECORD lnRec;
	DWORD NumRead;
	int downKey;

public:
	KeyEvent() {
		hln = GetStdHandle(STD_INPUT_HANDLE);
		EventCount = 1;
	}

	int getKey() {
		ReadConsoleInput(hln, &lnRec, 1, &NumRead);
		if (lnRec.EventType == KEY_EVENT) {
			downKey = lnRec.Event.KeyEvent.wVirtualKeyCode;
			return downKey;
		}
		else {
			return -1;
		}
		return -1;
	}
};
