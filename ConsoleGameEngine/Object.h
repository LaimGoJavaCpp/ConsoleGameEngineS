#pragma once

#include <iostream>
#include <string>

class Object
{
protected:
	std::string texture;
	int x, y;
public:
	int getX() { return x; }
	int getY() { return y; }
	std::string getTexture() { return texture; }
	void setTexture(std::string Tex) { texture = Tex; }
	void setX(int X) { x = X; }
	void setY(int Y) { y = Y; }
	virtual void draw();
	virtual void update();
	virtual void init();
};