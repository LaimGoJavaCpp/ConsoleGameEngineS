#include "Object.h"

void Object::draw()
{
	std::cout << texture;
}

void Object::update()
{
	//здесь мог бы быть ваш код:)
}

void Object::init()
{
	texture = "@";
}