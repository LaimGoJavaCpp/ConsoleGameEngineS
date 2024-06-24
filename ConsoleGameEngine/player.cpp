#include "player.h"

void player::draw()
{
	std::cout << texture;
}

void player::update()
{
	if (KeyBoard::isKeyPressed('s') || KeyBoard::isKeyPressed('S'))
	{
		y += 1;
	}
	if (KeyBoard::isKeyPressed('w') || KeyBoard::isKeyPressed('W'))
	{
		y -= 1;
	}
	if (KeyBoard::isKeyPressed('d') || KeyBoard::isKeyPressed('D'))
	{
		x += 1;
	}
	if (KeyBoard::isKeyPressed('a') || KeyBoard::isKeyPressed('A'))
	{
		x -= 1;
	}
}

void player::init()
{
	texture = "*";
}