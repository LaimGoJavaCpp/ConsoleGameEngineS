#pragma once

#include "Object.h"
#include "KeyBoard.h"

class player : public Object
{
public:
	void draw() override;
	void update() override;
	void init() override;
};