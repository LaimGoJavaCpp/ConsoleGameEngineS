#pragma once

#include "Scene.h"
#include "Cube.h"
#include "KeyBoard.h"

#include <vector>
#include <chrono>
#include <thread>

class App
{
	bool isExit;
	std::vector<Scene> Scenes;
	Scene* selecteScene;
public:
	void Init();
	void Update();
	void addObject(Object* obj);
	void addScene(Scene scene);
	Scene* getScene(int index);
	void setSelectScene(Scene* s);
};