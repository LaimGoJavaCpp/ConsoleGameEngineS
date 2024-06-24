#include "KeyBoard.h"

bool KeyBoard::isKeyPressed(char key)
{
	HANDLE hstdin = GetStdHandle(STD_INPUT_HANDLE);
	DWORD mode;
	BOOL result = GetConsoleMode(hstdin, &mode);
	DWORD newmode = mode & (0xFFFFFFFF - 2 - 4);
	result = SetConsoleMode(hstdin, newmode);
	char c = std::cin.get();
	if (c == key)
	{
		return true;
	}

	return false;
}