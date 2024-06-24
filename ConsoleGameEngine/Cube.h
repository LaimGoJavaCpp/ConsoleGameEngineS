#pragma once

#include "Object.h"

#include <iostream>

class Cube : public Object
{
public:
	void update() override;
	void init() override;
	void draw() override;
};